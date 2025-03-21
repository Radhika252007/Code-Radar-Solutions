#include <stdio.h>
#include <string.h>
char* longest_word(char* s);
int main(){
    char str[600];
    fgets(str,600,stdin);
    char result[250];
    strcpy(result,longest_word(str));
    printf("%s",result);
}
char* longest_word(char* s){
    int count =0;
    int max = -1;
    int len = strlen(s);
    char nonwords[] = " ,.;\n\t";
    char current[250];
    static char max_word[250];
    int i=0;
    while(i<len){
        count=0;
        while(i<len){
            if(strchr(nonwords,s[i])!=NULL)break;
            current[count++]=s[i];
            i++;
        }
        current[count]='\0';
        if(count>max){
            max = count;
            strcpy(max_word,current);
        }
        while(i<len){
            if(strchr(nonwords,s[i])==NULL)break;
            i++;
        }
    }
    return max_word;
}