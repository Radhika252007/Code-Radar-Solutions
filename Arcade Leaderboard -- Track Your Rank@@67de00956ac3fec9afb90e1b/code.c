void trackPlayerRanks(int arr[],int n, int player[],int m, int result[]){
    int rank[300000];
    int count = 0;
    int r=1;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            rank[i]=r;
            rank[i+1]=r;
        }
        else{
            rank[i+1]=++r;
        }
    }
    for(int i=0;i<m;i++){
        binarySearch(arr,player[i],n,result);
    }

}
void binarySearch(int arr[],int target,int n,int result[]){
    int start = 0, end = n-1, k =0;
    while(start<=end){
        mid = (end-start)/2;
        if(arr[mid]==target){
            result[k++]=rank[mid];
            return;
        }
        else if(target<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    result[k++]=rank[end]-1;
}