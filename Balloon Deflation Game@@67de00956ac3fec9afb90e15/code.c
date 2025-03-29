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
    for(int i=0;i<n;i++){
        int min = 0;
        int count =0;
        for(int k=0;k<n;k++){
            if(arr[k]!=0){
                min = arr[k];
                break;
            }
        }
        for(int j=0;j<n;j++){
                arr[j]=arr[j]-min;
        }
        for(int a = 0;a<n;a++){
            if(arr[a]>0){
                count++;
            }
        }
        if(count>0){
            printf("%d\n",count);
        }
    }
}