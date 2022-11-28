/*
**
** QWASAR.IO -- my_strcpy
**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {char*}
**
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int my_strcpy(char* param_1, char* param_2)
{
    for (int i =0; param_2[i] != '\0' || param_2[i] != '\0'; i++) {
        param_1[i] = param_2[i];
    }
    return 0;
}