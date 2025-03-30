#include <string.h>
void compressString(char str[],char compressed[]){
    int count = 1;
    int index = 0;
    int len = strlen(str);
    for(int i=0;i<len;i++){
        if((i+1<len)&&(str[i]==str[i+1])){
            count++;
        }
        else{
            compressed[index++] = str[i];
            if(count>1){
                char digits[50];
                int written = sprintf(digits,"%d",count);
                strcat(compressed,digits);
                index+=written;
            }
            count = 1;
        }
    }
    compressed[index] = '\0';
}