// Your code here...
int findOccurrence(int arr[],int n,int k,char mode){
    int res;
    if(mode == 'F'){
        for(int i=0;i<n;i++){
            if(arr[i]==k){
                res = i;
                break;
            }
        }
    }
    else if(mode == 'L'){
        for(int i=n;i>=0;i--){
            if(arr[i]==k){
                res = i;
                break;
            }
        }
    }
    else{
        return -1;
    }
    return res;
}