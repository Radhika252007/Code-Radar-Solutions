#include <stdio.h>
#include <string.h>

int main() {
    char ch[50],ch2[50];
    fgets(ch,50,stdin);
    fgets(ch2,50,stdin);
    printf("%s",strcat(ch,ch2));
    return 0;
}