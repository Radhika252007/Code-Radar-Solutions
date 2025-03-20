// Your code here...
int findKthMissing(int arr[],int n,int k){
    int start = 0, end = n-1;
    while(start<=end){
        int mid = start + (end - start)/2;
        int missing = arr[mid] - (mid +1);
        if(missing<k){
            start = mid +1;
        }
        else{
            end = mid -1;
        }
    }
    return start+k;
}