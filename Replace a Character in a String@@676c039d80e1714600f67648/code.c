#include <stdio.h>

int main() {
    char ch[50];
    scanf("%s",&ch);
    char b,c;
    scanf("%c %c",&b,&c);
    int length = 0;
    while(ch[length]!='\0'){
        length++;
    }
    for(int i=0;i<length;i++){
        if(ch[i]==b){
            ch[i]==c;
        }
    }
    printf("%s",ch);
    return 0;
}