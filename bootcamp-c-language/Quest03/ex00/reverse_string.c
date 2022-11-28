/*
**
** QWASAR.IO -- reverse_string
**
** @param {char*} param_1
**
** @return {char*}
**
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* reverse_string(char* param_1)
{
	for (int i = 0; i < strlen(param_1)/2; i++){
        char param_2 = param_1[i];
        param_1[i] = param_1[strlen(param_1)-i-1];
        param_1[strlen(param_1)-i-1] = param_2;
    }
  return param_1;

}


// int main() {
//   char my_str[] = "Hello";
  
//   printf("Before reverse -> %s\n", my_str);
//   printf("Reverse -> %s\n", reverse_string(my_str));
//   return 0;
// }