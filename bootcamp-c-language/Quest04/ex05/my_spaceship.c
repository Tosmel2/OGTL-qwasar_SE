#include <stdio.h>
#include <string.h>
#include <stdlib.h> // for malloc

char* my_spaceship(char* flight_path) {
  int x = 0;
  int y = 0;
  char* direction = "up";

  // Iterate through the string and update the x, y coordinates and direction
  // based on the letters in the flight path
  for (int i = 0; i < strlen(flight_path); i++) {
    if (flight_path[i] == 'R') {
      if (strcmp(direction, "up") == 0) {
        direction = "right";
      }
      else if (strcmp(direction, "right") == 0) {
        direction = "down";
      }
      else if (strcmp(direction, "down") == 0) {
        direction = "left";
      }
      else if (strcmp(direction, "left") == 0) {
        direction = "up";
      }
    }
    else if (flight_path[i] == 'L') {
      if (strcmp(direction, "up") == 0) {
        direction = "left";
      }
      else if (strcmp(direction, "left") == 0) {
        direction = "down";
      }
      else if (strcmp(direction, "down") == 0) {
        direction = "right";
      }
      else if (strcmp(direction, "right") == 0) {
        direction = "up";
      }
    }
    else if (flight_path[i] == 'A') {
      if (strcmp(direction, "up") == 0) {
        y--;
      }
      else if (strcmp(direction, "right") == 0) {
        x++;
      }
      else if (strcmp(direction, "down") == 0) {
        y++;
      }
      else if (strcmp(direction, "left") == 0) {
        x--;
      }
    }
  }

  // Allocate memory for the result string
  // (we need to allocate enough space to hold the largest possible result string)
  char* result = malloc(64 * sizeof(char));

  // Create the string to return in the required format
  sprintf(result, "{x: %d, y: %d, direction: '%s'}", x, y, direction);
  return result;
}

//  int main() {
//   // Test the my_spaceship function
//   char* flight_path = "AAAA";
//   char* result = my_spaceship(flight_path);
//   printf("%s", result);

//   return 0;
// }