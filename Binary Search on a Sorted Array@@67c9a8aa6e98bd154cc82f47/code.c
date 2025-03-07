// Your code here...
int binarySearch(int arr[],int n,int k){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(k>arr[mid]){
            start=mid+1;
        }
        else if(k<arr[mid]){
            end = mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}