#include "my_mastermind.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

#define NUM_ATTEMPTS 10
#define NUM_PIECES 9
#define CODE_LENGTH 4
#define BUFFER_SIZE 5

void generate_code(char *code, int len) {
srand(time(NULL));
for (int i = 0; i < len; i++) {
code[i] = rand() % NUM_PIECES + '0';
}
}

int check_guess(char *guess, char *code, int *well_placed, int *misplaced) {
int len = strlen(guess);
if (guess[len - 1] == '\n') {
guess[len - 1] = '\0';
}

if (strlen(guess) != CODE_LENGTH) {
return 0;
}

for (int i = 0; i < CODE_LENGTH; i++) {
if (guess[i] < '0' || guess[i] > '8') {
return 0;
}
}

*well_placed = 0;
*misplaced = 0;
for (int i = 0; i < CODE_LENGTH; i++) {
if (guess[i] == code[i]) {
(*well_placed)++;
}
else if (strchr(code, guess[i]) != NULL) {
(*misplaced)++;
}
}

return 1;
}

int main(int argc, char *argv[])
{
// Set the default number of attempts and secret code
int num_attempts = NUM_ATTEMPTS;
char secret_code[CODE_LENGTH + 1] = "";

// Parse command line arguments
for (int i = 1; i < argc; i++)
{
if (strcmp(argv[i], "-c") == 0)
{
strcpy(secret_code, argv[i+1]);
}
else if (strcmp(argv[i], "-t") == 0)
{
num_attempts = atoi(argv[i+1]);
}
}

// If no secret code was specified, generate a random one
if (strlen(secret_code) == 0)
{
generate_code(secret_code, CODE_LENGTH);
}

// Print the welcome message and instructions
printf("Will you find the secret code?\n");
printf("Please enter a valid guess\n");

// Loop for the number of attempts
for (int attempt = 0; attempt < num_attempts; attempt++)
{
// Read player's guess
char guess[BUFFER_SIZE] = {0};
printf("\n---\nRound %d\n>", attempt);
int read_bytes, guess_len = 0;
while ((read_bytes = read(0, &guess[guess_len], 1)) > 0 && guess[guess_len] != '\n') {
guess_len += read_bytes;
}
if (read_bytes == 0) {
printf("EOF detected, terminating game.\n");
break;
}

// Validate player's guess
int valid_guess = 1;
if (guess_len != CODE_LENGTH) {
  valid_guess = 0;
}
else {
  for (int i = 0; i < CODE_LENGTH; i++) {
    if (guess[i] < '0' || guess[i] > '8') {
      valid_guess = 0;
      break;
    }
  }
}

if (!valid_guess) {
  printf("Wrong input!\n");
  continue;
}

// Count the number of well placed and misplaced pieces
    int well_placed = 0;
    int misplaced = 0;
    for (int i = 0; i < CODE_LENGTH; i++)
    {
      if (guess[i] == secret_code[i])
      {
        well_placed++;
      }
      else if (strchr(secret_code, guess[i]) != NULL)
      {
        misplaced++;
      }
    }

    // Print the result
    printf("Well placed pieces: %d\n", well_placed);
    printf("Misplaced pieces: %d\n", misplaced);

        // Check if the player has won
    if (well_placed == 4)
    {
      printf("Congratz! You did it!\n");
      break;
    }
  }
  return 0;
}
