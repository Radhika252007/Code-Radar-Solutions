int searchInRotatedArray(int arr[],int n ,int target){
    int start = 0, end = n-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(target==arr[mid]){
            return mid;
        }
        if(arr[start]<=arr[mid]){
            if(arr[start]<=target && target<=arr[mid]){
                end = mid-1;
            }
            else{
                start=mid+1;
            }
        }
        else{
            if(arr[mid]<=target && target<=arr[end]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }
    return -1;
}