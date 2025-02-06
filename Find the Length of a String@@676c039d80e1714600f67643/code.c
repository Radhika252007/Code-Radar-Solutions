#include <stdio.h>

int main() {
    char ch[50];
    fgets(ch,50,stdin);
    int length = 0;
    while(ch[length]!='\0'){
        length++;
    }
    printf("%d",length);
    return 0;
}