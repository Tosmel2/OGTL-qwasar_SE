#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return dest;
}

// ====================== OR ======================

/*
**
** QWASAR.IO -- my_strncpy
**
** @param {char*} param_1
** @param {char*} param_2
** @param {int} param_3
**
** @return {char*}
**
*/

char* my_strncpy(char* param_1, char* param_2, int param_3)
{
    for (int i =0; i < param_3 && param_2[i] != '\0'; i++) {
        param_1[i] = param_2[i];
    }
    return param_1;

}