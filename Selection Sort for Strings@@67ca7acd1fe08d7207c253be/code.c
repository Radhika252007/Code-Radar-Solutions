// Your code here...
#include <string.h>
void(char arr[][100],int n){
    for(int i=0;i<n-1;i++){
        int min = i;
        char temp[100];
        for(int j=i+1;j<n;j++){
            if((strcmp(arr[j],arr[min]))>0){
                min = j;
            }
        }
        strcpy(temp,arr[i]);
        strcpy(arr[i],arr[min]);
        strcmp(arr[min],temp);
    }
}
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}