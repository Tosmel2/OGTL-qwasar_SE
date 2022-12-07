#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
**
** QWASAR.IO -- my_join
**
** @param {string_array*} param_1
** @param {char*} param_2
**
** @return {char*}
**
*/
#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

char* my_join(string_array* strings, char* separator) {
    // Check if the array of strings is empty
  if (strings == NULL || strings->array == NULL || strings->size <= 0) {
    // Handle the case where the array is empty
    return NULL;
  }

  int separator_length = 0;
  if (separator != NULL) {
    // Get the length of the separator string
    separator_length = strlen(separator);
  }
  
  // Determine the total length of the joined string
  int total_length = 0;
  for (int i = 0; i < strings->size; i++) {
    total_length += strlen(strings->array[i]);
  }
  // Add space for the separator characters and the null terminator
  total_length += strings->size - 1 + strlen(separator) + 1;

  // Allocate memory for the result
  char* result = malloc(total_length);

  // Concatenate the strings with the separator character in between
  int current_index = 0;
  for (int i = 0; i < strings->size; i++) {
    strcpy(result + current_index, strings->array[i]);
    current_index += strlen(strings->array[i]);
    if (i < strings->size - 1) {
      strcpy(result + current_index, separator);
      current_index += strlen(separator);
    }
  }
  result[current_index] = '\0'; // null-terminate the string

  return result;
}

// int main(int argc, char** argv) {
//   // Example usage:
//   char* example_strings[] = {"Hello", "world", "how", "are", "you"};
//   string_array strings = {5, example_strings};
//   char* result = my_join(&strings, ", ");
//   printf("Joined string: %s\n", result);

//   // Don't forget to free the memory allocated for the result
//   free(result);

//   return 0;
// }

