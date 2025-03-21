#include <stdio.h>
#include <string.h>
int main() {
    char ch[50];
    scanf("%s",&ch);
    char ch2[50];
    scanf("%s",&ch2);
    int len = strlen(ch);
    char temp = ch[len-1];
    for(int i=len-2;i>0;i--){
        ch[i+1]=ch[i];
    }
    ch[0]=temp;
    if(strcmp(ch,ch2)==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}