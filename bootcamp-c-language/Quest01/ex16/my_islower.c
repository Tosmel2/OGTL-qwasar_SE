#include <stdio.h>

int my_islower(char param_1)
{
  if ((param_1 >= 'a') && (param_1 <= 'z'))
		return 1;
	else
		return 0;
}

int main() {
  printf("%d\n", my_islower('a'));
  printf("%d\n", my_islower('A'));
  printf("%d\n", my_islower('0'));
  return 0;
}
