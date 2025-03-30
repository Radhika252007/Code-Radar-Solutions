int countGlovePairs(int arr[],int n){
    int freq[n];
    for(int i=0;i<n;i++){
        freq[i]=1;
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(freq[i]==1){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    freq[j]=0;
                    freq[i]++;
                }
            }
        }
        if(freq[i]>1){
            count += freq[i]/2;
        }
    }
    
    return count;
}