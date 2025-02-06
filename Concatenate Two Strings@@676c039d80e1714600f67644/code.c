#include <stdio.h>
#include <string.h>

int main() {
    char ch[100],ch2[50];
    fgets(ch,100,stdin);
    fgets(ch2,50,stdin);
    strcat(ch,ch2);
    printf("%s",ch);
    return 0;
}