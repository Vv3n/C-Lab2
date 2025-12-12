#include <stdio.h>

void explode(char str1[], char splitter, char str2[][10], int *count) ;

int main(){
    char out[20][10];
    int num;
    explode("I/Love/You",'/', out, &num);

    for(int i = 0; i < num; i++){
        printf("str2[%d] = %s\n", i, out[i]);
    }

    return 0;
}

void explode(char str1[], char splitter, char str2[][10], int *count){
    int i = 0, j = 0, k = 0;
    *count = 0;

    while(str1[i] != '\0'){
        if(str1[i] == splitter){
            str2[j][k] = '\0';
            j++;
            k = 0;
            (*count)++;
        }
        else{
            str2[j][k] = str1[i];
            k++;
        }
        i++;
    }
    str2[j][k] = '\0';
    (*count)++;
}