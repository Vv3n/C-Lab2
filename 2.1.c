#include <stdio.h>

void reverse(char str1[], char str2[]);

int main(){
    char text[50] = "I Love You";
    char out[50];
    reverse(text, out);

    printf("Original : %s\n", text);
    printf("Reversed : %s\n", out);
}

void reverse(char str[], char str2[]){
    int lent = 0;

    while(str[lent] != '\0'){
        lent++;
    }

    for(int i = 0; i < lent; i++){
        str2[i] = str[lent - 1 - i];
    }

    str2[lent] = '\0';
}