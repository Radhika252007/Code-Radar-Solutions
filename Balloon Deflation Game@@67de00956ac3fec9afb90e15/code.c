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
    printf("%d\n",n);
    int previous;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            previous=arr[i];
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>previous){
            printf("%d\n",n-i);
            previous=arr[i];
        }
    }
}