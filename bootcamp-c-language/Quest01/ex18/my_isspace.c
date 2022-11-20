#include <stdio.h>
#include <ctype.h>

int my_isspace(char param_1)
{
  if (param_1 == 32)
		return 1;
	else
		return 0;
}

int main() {
  printf("%d\n", my_isspace('a'));
  printf("%d\n", my_isspace('A'));
  printf("%d\n", my_isspace(' '));
  return 0;
}
