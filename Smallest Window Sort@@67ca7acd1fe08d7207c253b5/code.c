int findUnsortedSubarray(int arr[], int n){
    for(int i=1;i<n;i++){
        if(!(arr[i]>=arr[i-1])){
            return n-i;
        }
    }
    return 0;
}