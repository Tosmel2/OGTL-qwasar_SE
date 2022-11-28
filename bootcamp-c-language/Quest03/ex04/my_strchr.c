/*
**
** QWASAR.IO -- my_strchr
**
** @param {char*} param_1
** @param {char} param_2
** @s: string to search
** @c: character to search for
**
** Return: pointer to first occurence of c in s
**
** @return {char*}
**
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* my_strchr(char *s, char c)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            return &s[i];
        }
        i++;
    }
    return NULL;
}

// int main() {
//   printf("%s\n", my_strchr("abcabc", "b"));
//   return 0;
// }