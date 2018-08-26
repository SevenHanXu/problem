/*************************************************************************
	> File Name: sentence_reversal.c
	> Author: 
	> Mail: 
	> Created Time: 日  8/26 16:17:56 2018
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main(){
    char s[1000];
    gets(s);
    int len = strlen(s);
    for(int i = len - 1; i >= 0; i--){
        if(s[i] == ' '){
            for(int j = i + 1; s[j] != ' ' && s[j] != '\0'; j++){
                printf("%c", s[j]);
            }
            printf(" ");
        }
    }
    int i = 0;
    while(s[i] != ' ') i++;
    for(int j = 0; j < i; j++) printf("%c", s[j]);
    printf("\n");
    return 0;
}
