// Your code here...
void isertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0&&arr[prev]>curr){
            arr[prev+1] =arr[prev];
            prev--;
        }
        arr[prev+1] = arr[curr];
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}