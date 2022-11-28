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


char* my_strrchr(char* param_1, char param_2)
{
    int i = 0;
    int j = 0;
    while (param_1[i] != '\0')
    {
        if (param_1[i] == param_2)
        {
            j = i;
        }
        i++;
    }
    if (j == 0)
    {
        return 0;
    }
    return &param_1[j];

}

// int main() {
//   printf("%s\n", my_strrchr("abcabc", "b"));
//   return 0;
// }