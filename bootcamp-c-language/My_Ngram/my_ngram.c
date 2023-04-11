#include "my_ngram.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHARS 256  // Maximum number of characters

void my_ngram(int argc, char *argv[]) {
  int counts[MAX_CHARS];  // Array to store the counts of each character
  memset(counts, 0, sizeof(counts));  // Initialize counts to 0

  // Iterate through each argument and count the occurrences of each character
  for (int i = 1; i < argc; i++) {
    char *arg = argv[i];
    for (size_t j = 0; j < strlen(arg); j++) {
      char c = arg[j];
      counts[(int)c]++;
    }
  }

  // Print the results
  for (int i = 0; i < MAX_CHARS; i++) {
    if (counts[i] > 0) {
      printf("%c:%d\n", (char)i, counts[i]);
    }
  }
}

int main(int argc, char *argv[]) {
  my_ngram(argc, argv);
  return 0;
}


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define MAX_CHARS 256  // Maximum number of characters

// void my_ngram(int argc, char *argv[]) {
//   int counts[MAX_CHARS];  // Array to store the counts of each character
//   memset(counts, 0, sizeof(counts));  // Initialize counts to 0

//   // Iterate through each argument and count the occurrences of each character
//   for (int i = 1; i < argc; i++) {
//     char *arg = argv[i];
//     for (int j = 0; j < strlen(arg); j++) {
//       char c = arg[j];
//       counts[(int)c]++;
//     }
//   }

//   // Print the results
//   for (int i = 0; i < MAX_CHARS; i++) {
//     if (counts[i] > 0) {
//       printf("'%c': %d\n", (char)i, counts[i]);
//     }
//   }
// }

// int main(int argc, char *argv[]) {
//   my_ngram(argc, argv);
//   return 0;
// }