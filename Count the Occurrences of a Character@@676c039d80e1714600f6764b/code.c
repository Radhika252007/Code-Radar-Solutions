#include <stdio.h>

int main() {
    char ch[50];
    scanf("%s",&ch);
    char b;
    scanf(" %c",&b);
    int length = 0;
    while(ch[length]!='\0'){
        length++;
    }
    int count = 0;
    for(int i=0;i<length;i++){
        if(ch[i]==b){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}