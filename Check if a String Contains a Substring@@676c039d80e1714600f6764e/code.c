#include <stdio.h>
#include <string.h>
int main(){
    char str[200];
    char input[60];
    fgets(str,200,stdin);
    fgets(input,60,stdin);
    char word[60];
    int len = strlen(str);
    if(strstr(str,input)){
        printf("Yes");
    }
    else{
    printf("No");}
    return 0;
}