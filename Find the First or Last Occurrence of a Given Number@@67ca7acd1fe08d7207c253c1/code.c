// Your code here...
int findOccurence(int arr[],int n,int k,char mode){
    int res;
    if(mode == 'F'){
        for(int i=0;i<n;i++){
            if(arr[i]==k){
                res = i;
                break;
            }
        }
    }
    if(mode == 'L'){
        for(int i=n;i>=0;i--){
            if(arr[i]==k){
                res = i;
                break;
            }
        }
    }
    return res;
}