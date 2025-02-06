#include <stdio.h>
#include <string.h>
int main() {
    char ch[50];
    fgets(ch,50,stdin);
    int length = strlen(ch);
    for(int i=0;i<length;i++){
        if(ch[i]>='a'&&ch[i]<='z'){
            ch[i]=ch[i]-32;
        }
        else if(ch[i]>='A'&&ch[i]<='Z'){
            ch[i]=ch[i]+32;
        }
    }
    puts(ch);
    return 0;
}