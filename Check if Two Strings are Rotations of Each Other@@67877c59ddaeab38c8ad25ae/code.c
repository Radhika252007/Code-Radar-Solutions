#include <stdio.h>
#include <string.h>
int main() {
    char ch[50];
    scanf("%s",&ch);
    char ch2[50];
    scanf("%s",&ch2);
    int len = strlen(ch);
    int true = 1;
    for(int i=0;i<len;i++){
        if(ch[i]!=ch2[len-i-1]){
            true =0;
        }
    }
    if(true){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}