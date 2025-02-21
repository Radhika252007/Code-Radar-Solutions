#include <stdio.h>
#include <string.h>
int main() {
    char ch[50];
    int j=0;
    fgets(ch,50,stdin);
    int len = strlen(ch);
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(ch[i]==ch[j]){
                ch[j]='0';
            }
            }
        }
    for(int i=0;i<len;i++){
        if(ch[i]!='0'){
            ch[j++]=ch[i];
        }
    }
    printf("%s",ch);
    return 0;
}