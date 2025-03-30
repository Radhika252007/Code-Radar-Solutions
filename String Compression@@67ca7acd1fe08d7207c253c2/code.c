#include <string.h>
void compressString(char str[],char compressed[]){
    int count = 1;
    int index = 0;
    for(int i=0;i<strlen(str);i++){
        if((str[i]==str[i+1])&&i+1<strlen(str)){
            count++;
        }
        else{
            compressed[index++] = str[i];
            if(count>1){
                char count[50];
                int written = sprintf(count,"%d",count);
                strcat(compressed,count);
                index+=written;
            }
            count = 1;
        }
    }
    compressed[index] = '\0';
}