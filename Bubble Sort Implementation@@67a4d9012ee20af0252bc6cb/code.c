#include <stdio.h>

int bubbleSort(int arr[],int n);

int bubbleSort(int arr[],int n){
    int min = arr[0];
    for(int i=0;i<a;i++){
        if(arr[i+1]>arr[i]){
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    return arr;
}
