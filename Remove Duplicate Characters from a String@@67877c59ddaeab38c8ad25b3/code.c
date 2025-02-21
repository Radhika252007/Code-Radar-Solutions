#include <stdio.h>
#include <string.h>
int main() {
    char ch[50];
    int j=0;
    fgets(ch,50,stdin);
    int len = strlen(ch);
    for(int i=0;i<len;i++){
        for(int k=i+1;k<len;k++){
            if((ch[i]==ch[k])&&i!=k){
                ch[k]='0';
            }
            }
        }
    for(int a=0;a<len;a++){
        if(ch[a]!='0'){
            ch[j++]=ch[a];
        }
    }
    printf("%s",ch);
    return 0;
}