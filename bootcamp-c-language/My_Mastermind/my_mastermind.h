#ifndef MY_MASTERMIND_H
#define MY_MASTERMIND_H

#define NUM_ATTEMPTS 10
#define NUM_PIECES 9
#define CODE_LENGTH 4

void generate_code(char *code, int len);
int check_guess(char *guess, char *code, int *well_placed, int *misplaced);

#endif // MY_MASTERMIND_H