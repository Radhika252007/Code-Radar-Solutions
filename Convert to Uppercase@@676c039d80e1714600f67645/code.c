#include <stdio.h>
#include <string.h>
int main() {
    char ch[50];
    scanf("%s",&ch);
    int len = strlen(ch);
    for(int i=0;i<len;i++){
        if(ch[i]>='a' && ch[i]<'z'){
            ch[i] = ch[i]-32;
        }
    }
    printf("%s",ch);
    return 0;
}