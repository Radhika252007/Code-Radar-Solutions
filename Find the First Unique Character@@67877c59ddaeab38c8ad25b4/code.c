// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char ch[300];
    scanf("%s",&ch);
    int len = strlen(ch);
    int isUnique = 1;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(i!=j&&ch[i]==ch[j]){
                isUnique=0;
            }}
            if(isUnique){
                printf("%c",ch[i]);
                break;
            }
            
        }
    }
