#include <stdio.h>
#include <string.h>

int main() {
    char ch[50],ch2[50];
    fgets(ch,50,stdin);
    fgets(ch2,50,stdin);
    char ch3[50]=strcat(ch,ch2);
    puts(ch3);
    return 0;
}