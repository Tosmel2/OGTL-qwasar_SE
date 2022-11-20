#include <stdio.h>
#include <ctype.h>

int my_isdigit(char param_1)
{
  if (param_1 > 47 && param_1 < 58)
		return 1;
	else
		return 0;
}

int main() {
  printf("%d\n", my_isdigit('a'));
  printf("%d\n", my_isdigit(' '));
  printf("%d\n", my_isdigit('0'));
  return 0;
}
