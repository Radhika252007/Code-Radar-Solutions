#include <stdio.h>

int main() {
    char ch[50];
    scanf("%s",&ch);
    int length = 0;
    while(ch[length]!='/0'){
        length++;
    }
    int count = 0;
    for(int i=0;i<length;i++){
        if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')||(str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||(str[i]=='U')){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}