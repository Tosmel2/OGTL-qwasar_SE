#include <stdio.h>

int my_sub(int param_1, int param_2)
{
  return param_1 - param_2;

}


int main() {
  printf("%d\n", my_sub(2, 3));
  return 0;
}
