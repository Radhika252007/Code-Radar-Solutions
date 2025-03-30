int countGlovePairs(int arr[],int n){
    int freq[n];
    freq[n]={1};
    for(int i=0;i<n;i++){
        if(freq[i]==1){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    freq[j]=0;
                    freq[i]++;
                }
            }
        }
    }
    int count =0;
    for(int i=0;i<n;i++){
        if(freq[i]>1){
            count += freq[i]/2;
        }
    }
}