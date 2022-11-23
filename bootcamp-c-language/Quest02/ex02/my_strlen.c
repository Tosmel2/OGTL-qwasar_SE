#include <stdio.h>

int my_strlen(char *param_1)
{
  int i;

  i = 0;
  while (param_1[i] != '\0')
  {
    i++;
  }
  return i;

  // int c;

	// for (c = 0; param_1[c] != '\0'; c++);

	// return (c);

}


int main() {
  printf("%d\n", my_strlen("RaInB0w d4Sh!"));
  return 0;
}