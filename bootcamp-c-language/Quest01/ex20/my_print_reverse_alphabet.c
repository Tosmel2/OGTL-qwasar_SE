#include <stdio.h>
#include <unistd.h>

void my_print_reverse_alphabet()
{
  char c = ' ';

  for (c = 'a' && c <= 'z'; sizeof(c-1); c++)
  {
    write(1, &c, 1);
  }
  return 0;
}

int main() {
  printf("%c\n", my_print_reverse_alphabet());
  return 0;
}

