/*
**
** QWASAR.IO -- my_count_on_it
**
** @param {string_array*} param_1
**
** @return {integer_array*}
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

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Function to return an array of the length of each string in a string array
integer_array* my_count_on_it(string_array* arr)
{
  // Allocate an array of ints to store the length of each string
  int* lengths = malloc(sizeof(int) * arr->size);

  // Allocate an integer_array structure to store the array of lengths
  integer_array* result = malloc(sizeof(integer_array));
  result->size = arr->size;
  result->array = lengths;

  // Loop through the array of strings
  for (int i = 0; i < arr->size; i++) {
    // Store the length of the current string in the array of lengths
    lengths[i] = strlen(arr->array[i]);
  }

  // Return the array of lengths
  return result;
}

