// Your code here...
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr = arr[i];
        int prev =i-1;
        while(prev>=0&&arr[prev]>curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] =curr;
    }
}
int kthSmallest(int arr[],int n,int k){
    insertionSort(arr,n);
    if(k<0||k>n){
        return -1;
    }
    int res = arr[k-1];
    return res;
}