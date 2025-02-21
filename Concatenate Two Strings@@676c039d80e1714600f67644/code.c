#include <stdio.h>
#include <string.h>

int main() {
    char ch[100],ch2[50];
    fgets(ch,100,stdin);
    fgets(ch2,50,stdin);
    int len1 = strlen(ch);
    int len2 = strlen(ch2);
    ch[len1] = '\0';
    ch2[len2] ='\0';
    strcat(ch,ch2);
    printf("%s",ch);
    return 0;
}