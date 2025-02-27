// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char ch[300];
    fgets(ch,300,stdin);
    int len = strlen(ch);
    for(int i=0;i<len-1;i++){
        int isUnique = 1;
        for(int j=i+1;j<len;j++){
            if(ch[i]==ch[j]){
                isUnique=0;
            }}
            if(isUnique){
                printf("%c",ch[i]);
                break;
            }
        }
    }
}