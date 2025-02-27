#include <stdio.h>
#include <string.h>
int main() {
    char ch[50];
    fgets(ch,50,stdin);
    int len = strlen(ch);
    for(int i=0;i<len;i++){
        int isUnique = 1;
        for(int j=0;j<len;j++){
            if(i!=j &&ch[i]==ch[j]){
                isUnique=0;
            }
        }
        if(isUnique){
            printf("%c",ch[i]);
            return 0;
        }
    }
    printf("%c",'-');
    return 0;
}