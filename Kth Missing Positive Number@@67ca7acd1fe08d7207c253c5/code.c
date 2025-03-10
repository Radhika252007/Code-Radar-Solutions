// Your code here...
int findKthMissing(int arr[],int n){
    for(int i=1;;i++){
        int count = 0;
        int present = 0;
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                present = 1;
                break;
            }
        }
        if(!present){
            count++;
            if(count==n){
                return i;
            }
        }
    }
}