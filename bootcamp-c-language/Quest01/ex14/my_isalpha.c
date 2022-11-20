#include <stdio.h>

int my_isalpha(char param_1)
{
  if (((param_1 >= 'a') && (param_1 <= 'z')) || ((param_1 >= 'A') && (param_1 <= 'Z')))
		return 1;
	else
		return 0;
}

int main() {
  printf("%d\n", my_isalpha('a'));
  printf("%d\n", my_isalpha(' '));
  printf("%d\n", my_isalpha('0'));
  return 0;
}
