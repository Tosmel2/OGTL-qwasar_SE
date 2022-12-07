// /*
// **
// ** QWASAR.IO -- my_print_words_array
// **
// ** @param {string_array*} param_1
// **
// ** @return {void}
// **
// */
#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
// Define the string_array structure
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

#include <stdio.h>
#include <string.h>

// Function to print a string
void my_putstr(const char *str) {
  // Loop through the characters of the string and print them one by one
  for (int i = 0; i < strlen(str); i++) {
    putchar(str[i]);
  }
}

// Function to display the content of an array of strings
void my_print_words_array(string_array* arr)
{
  // Loop through the array of strings
  for (int i = 0; i < arr->size; i++) {
    // Print the current string followed by a newline
    my_putstr(arr->array[i]);
    putchar('\n');
  }
}

// int main()
// {
//   // Define an array of strings
//   string_array words = {4, {"abc", "def", "gh"}};

//   // Display the content of the array of strings
//   display_words_array(&words);

//   return 0;
// }
