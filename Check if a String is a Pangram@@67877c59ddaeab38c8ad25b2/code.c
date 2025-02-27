// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char ch[300];
    fgets(ch,300,stdin);
    char freq[26]={0};
    int index;
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]>='A'&&ch[i]<='Z'){
            index = ch[i]-'A';
            freq[index]++;
        }
        else if(ch[i]>='a'&&ch[i]<='z'){
            index = ch[i]-'a';
            freq[index]++;
        }
    }
    for(int i=0;i<26;i++){
        if(freq[i]!=1){
            printf("No");
            return 0;
        }
    }
    printf("Yes");
}