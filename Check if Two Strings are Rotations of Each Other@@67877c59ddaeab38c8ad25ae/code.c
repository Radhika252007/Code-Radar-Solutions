#include <stdio.h>
#include <string.h>
int main() {
    char ch[50];
    scanf("%s",&ch);
    char ch2[50];
    scanf("%s",&ch2);
    int len = strlen(ch);
    char temp = ch[len-1];
    for(int i=0;i<len;i++){
        ch[len-i-1]=ch[len-i-2];
    }
    return 0;
}