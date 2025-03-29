int maxGadgetSpend(int keyboard[],int n, int headsets[],int m, int budget){
    int max = 0;
    int flag = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int result = keyboard[i]+headsets[j];
            if((result<=budget)&&(result>max)){
                max = result;
                flag = 0;
            }
        }
    }
    if(flag){
        return -1;
    }
    return max;
}