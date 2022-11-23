#include <stdio.h>
#include <unistd.h>

int my_putchar(char str) {
  return write(1, &str, 1);
}

int my_putstr(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		my_putchar(str[i]);
	}
	// my_putchar('\n');

    return 0;
}

// int main() {
//   my_putstr("RaInB0w d4Sh!");
//   return 0;
// }