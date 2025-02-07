#include <stdio.h>
#include <string.h>
int main() {
    char ch[50];
    fgets(ch,50,stdin);
    int len = strlen(ch);
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len;j++){
            if(ch[i]==ch[j]){
                if(j==len-1){
                    ch[j]=" ";
                }
                else{
                    ch[j]=ch[j+1];
                }
            }
        }
    }
    printf("%s",ch);
    return 0;
}