#include <string.h>
char* compressString(char* str,char* compressed){
    int count = 1;
    int index = 0;
    if(strlen(str)==1){
        return str;
    }
    for(int i=0;i<strlen(str);i++){
        if((str[i]==str[i+1])&&i+1<strlen(str)){
            count++;
        }
        else{
            compressed[index++] = str[i];
            if(count>1){
            int written = sprintf(&compressed[index],"%d",count);
            index+=written;}
            count = 1;
        }
    }
    compressed[index] = '\0';
    return compressed;

}