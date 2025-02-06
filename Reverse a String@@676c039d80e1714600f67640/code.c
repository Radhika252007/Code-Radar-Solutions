#include <stdio.h>

int main() {
    char str[50];
    scanf("%s",&str);
    int length = 0;
    while(str[length]!='\0'){
        length++;
    }
    char str2[50];
    for(int i=0;i<length;i++){
        str2[length-1]=str[i];
    }
    printf("%s",str2);
    return 0;
}