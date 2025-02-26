// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char ch[200];
    fgets(ch,200,stdin);
    int len = strlen(ch);
    int j=0
    for(int i=0;i < len;i++){
        if(!(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')){
            ch[j++]=ch[i];
        }
    }
    ch[j]='\0';
    printf("%s",ch);
}