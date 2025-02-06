#include <stdio.h>


int main() {
    char ch[50];
    fgets(ch,50,stdin);
    int true = 1;
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]!='1'&& ch[i]!='0')
        true = 0;
    }
    if(true){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}