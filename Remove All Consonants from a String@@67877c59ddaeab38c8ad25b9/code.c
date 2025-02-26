// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char ch[200];
    fgets(ch,200,stdin);
    int len = strlen(ch);
    for(int k=0;k<len;k++){
        if(ch[k]>='A'&&ch[k]<='Z'{
            ch[i]+=32;
        })
    }
    int j=0;
    for(int i=0;i < len;i++){
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]==' '||ch[i]>'Z'&&ch[i]<'a'||ch[i]<'A'||ch[i]>'z'){
            ch[j++]=ch[i];
        }
    }
    ch[j]='\0';
    printf("%s",ch);
}