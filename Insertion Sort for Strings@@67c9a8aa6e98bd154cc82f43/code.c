// Your code here...
#include <string.h>
void insertionSort(char arr[][100],int n){
    for(int i=1;i<n;i++){
        char temp[100];
        strcpy(temp,arr[i]);
        int prev =i-1;
        while(prev>=0&&(strcmp(arr[prev],temp))>0){
            strcpy(arr[prev+1],arr[prev]);
            prev--;
        }
        strcpy(arr[prev+1],temp);
    }
}
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}