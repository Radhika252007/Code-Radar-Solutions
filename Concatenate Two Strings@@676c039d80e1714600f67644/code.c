#include <stdio.h>
#include <string.h>

int main() {
    char ch[100],ch2[50];
    fgets(ch,100,stdin);
    fgets(ch2,50,stdin);
    
    puts(strcat(ch,ch2));
    return 0;
}