#include <stdio.h>
#include <unistd.h>

void my_putchar(char ch) {
  write(1, &ch, 1);
}

void my_print_alphabet()
{
  char ch;

  for (ch = 'a'; ch<= 'z'; ch++)
  {
      my_putchar(ch);
  }
  my_putchar('\n');
}

int main() {
  printf("%d\n", my_print_alphabet());
  return 0;
}