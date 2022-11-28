/*
**
** QWASAR.IO -- my_strcmp
**
** @param {char*} param_1
** @param {char*} param_2
**
* Return: negative int if s1 < s2, 0 if matching, and positive int if s1 > s2
** @return {int}
**
*/
#include <stdio.h>

int my_strcmp(char* s1, char* s2)
{
//   int i;

	for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i]){
			return (s1[i] - s2[i]);
      }

	}
	return 0;

}

int main() {
  printf("%d\n", my_strcmp("bc","abc"));
  return 0;
}