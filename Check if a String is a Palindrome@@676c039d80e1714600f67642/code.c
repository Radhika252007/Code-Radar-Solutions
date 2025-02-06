#include <stdio.h>
#include <string.h>

int main() {
    int ch[50];
    scanf("%s",&ch);
    char ch2[50];
    int len=strlen(ch);
    for(int i=0;i<len;i++){
        ch2[len-i-1]=ch[i];
    }
    int result = strcmp(ch,ch2);
    if(result){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}