#include <stdio.h>
#include <ctype.h>

int my_isupper(char param_1)
{
  if (param_1 > 64 && param_1 < 91)
		return 1;
	else
		return 0;
}

int main() {
  printf("%d\n", my_isupper('a'));
  printf("%d\n", my_isupper('A'));
  printf("%d\n", my_isupper('0'));
  return 0;
}
