void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;          
            }
        }
    }
}
void deflateBalloons(int arr[],int n){
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        int count =0;
        for(int k=0;k<n;k++){
            if(arr[k]!=0){
                min = arr[k];
                break;
            }
        }
        for(int j=0;j<n;j++){
            if(arr[j]>0){
                arr[j]=arr[j]-min;
                count++;
            }
        }
        if(count>0){
            printf("%d\n",count);
        }
    }
}