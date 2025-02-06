#include <stdio.h>
#include <string.h>

int main() {
    char ch[50],ch2[50];
    scanf("%s",&ch);
    scanf("%s",&ch2);
    printf("%s",strcat(ch,ch2));
    return 0;
}