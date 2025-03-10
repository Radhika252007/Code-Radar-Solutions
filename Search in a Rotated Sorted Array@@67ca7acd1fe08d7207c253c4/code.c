int searchInRotatedArray(int arr[],int n ,int target){
    int start = 0, end = n-1;
    while(start<=end){
        mid = start+(end-start)/2;
        if(target==mid){
            return mid;
        }
        if(target<mid){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
}