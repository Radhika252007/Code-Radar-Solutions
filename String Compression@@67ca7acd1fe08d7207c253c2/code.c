#include <string.h>
char* compressString(char* str,char* compressed){
    int count = 1;
    char curr = str[0];
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
            sprintf(&compressed[index],"%d",count);
            index++;
            count = 1;
        }
    }

}