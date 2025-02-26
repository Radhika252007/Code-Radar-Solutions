// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char ch[200];
    fgets(ch,200,stdin);
    int len = strlen(ch);
    int freq[200] = {1};
    for(int j = 0;j<len;j++){
        if(ch[j]!='0'&&ch[j]!='\n'){
            for(int k=j+1;k<len;k++){
                if(ch[j]==ch[k]){
                    freq[j]++;
                    ch[k]='0';
                }
            }
        }
    }
    int maxFreq = 1;
    char max;
    for(int a=0;a<len;a++){
        if(ch[a]!='0'&& ch[a]!='\n'&& freq[a]>maxFreq){
            maxFreq = freq[a];
            max = ch[a];
        }
    }
    printf("%c",max);

}