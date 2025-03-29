void binarySearch(int arr[],int target,int n,int result[],int rank[],int index);
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
        binarySearch(arr,player[i],n,result,rank,i);
    }

}
void binarySearch(int arr[],int target,int n,int result[],int rank[],int index){
    int start = 0, end = n-1;
    while(start<=end){
        int mid = (end-start)/2;
        if(arr[mid]==target){
            result[index]=rank[mid];
            return;
        }
        else if(target<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    if(target>arr[0]){
        result[index]=1;
    }
    else if (end >= 0) {
        result[index] = rank[end] + 1;
    } else {
        result[index] = rank[0] + 1; 
    }}