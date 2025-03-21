#include <stdio.h>
 
 int main() {
     int a;
     scanf("%d",&a);
     int arr[a];
     for(int i=0;i<a;i++){
         scanf("%d",&arr[i]);
     }
     int b;
     scanf("%d",&b);
     int count = 0;
     for(int i=0;i<a-1;i++){
         for(int j=1+i;j<a;j++){
             if((arr[i]+arr[j]==b)&&(arr[i]!=arr[j]||count==0)){
                 printf("%d %d\n",arr[i],arr[j]);
                 count++;
             }}
     return 0;
 }}