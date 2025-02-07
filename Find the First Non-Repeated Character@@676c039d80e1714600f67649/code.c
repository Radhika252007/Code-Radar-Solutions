#include <stdio.h>
#include <string.h>
int main() {
    char ch[50];
    fgets(ch,50,stdin);
    int len = strlen(ch);
    for(int i=0;i<len-1;i++){
        for(int j=1;j<len;j++){
            if(ch[i]!=ch[j]){
                printf("%c",arr[i]);
                return 0;
            }
        }
    }
    printf("%c",'-');
    return 0;
}