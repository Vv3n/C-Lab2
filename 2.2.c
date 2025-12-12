#include <stdio.h>

char* reverse(char str1[]);

int main(){
    char text[50] = "I Love You" ;
    char *out;
    out = reverse(text);

    printf("%s\n", text);
    printf("%s\n", out);
}

char* reverse(char str1[]){
    static char out[50];
    int lent = 0;

    while(str1[lent] != '\0') lent++;

    for(int i = 0; i < lent; i++){
        out[i] = str1[lent - 1 - i];
    }
    out[lent] = '\0';

    return out;
}