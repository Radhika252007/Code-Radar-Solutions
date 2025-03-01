// #include <stdio.h>

// int main() {
//     int a;
//     scanf("%d",&a);
//     int arr[a];
//     for(int i=0;i<a;i++){
//         scanf("%d",&arr[i]);
//     }
//     int b;
//     scanf("%d",&b);
//     int count = 0;
//     for(int i=0;i<a-1;i++){
//         for(int j=1+i;j<a;j++){
//             if((arr[i]+arr[j]==b && arr[i]!=arr[j])||count==0){
//                 printf("%d %d\n",arr[i],arr[j]);
//                 count++;
//             }
//         }
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int a,n;
    scanf("%d",&a);
    int arr[a];

    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&n);
    int count = 0;
    for(int j = 0;j<(a-1);j++){
        for(int k = j+1;k<a;k++){
            if(arr[j]+arr[k]==n && (arr[j]!=arr[k] || count==0)){
                printf("%d %d\n",arr[j],arr[k]);
                count++;
            }
        }
    }
    return 0;
}