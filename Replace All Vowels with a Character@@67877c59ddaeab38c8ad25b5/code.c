#include <stdio.h>


int main() {
    char ch[50];
    fgets(ch,50,stdin);
    char b;
    scanf(" %c",&b);
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'){
            ch[i]=b;
        }
    }
    puts(ch);
    return 0;
}