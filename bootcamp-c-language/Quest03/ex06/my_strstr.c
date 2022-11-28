/*
**
** QWASAR.IO -- my_strstr
**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {char*}
**
*/
#include <stdio.h>
#include <string.h>

char* my_strstr(char* param_1, char* param_2){
    if(param_2[0] == 0){
        return param_1;
    }
    int i = 0;
    while(param_1[i] != '\0'){
        int j = 0; 
        while(param_2[j] != '\0'){
            if(param_1[i+j] != param_2[j]){
                break;
            }
            if(j == strlen(param_2)-1){
                return &param_1[i];
            }
            j++;
        }
        i++;
      }
   return NULL;
}

int main() {
  printf("%s\n", my_strstr("aaaaa",""));
  printf("%s\n", my_strstr("hello","ll"));
  printf("%s\n", my_strstr("aaaaa","bba"));
  
  return 0;
}
