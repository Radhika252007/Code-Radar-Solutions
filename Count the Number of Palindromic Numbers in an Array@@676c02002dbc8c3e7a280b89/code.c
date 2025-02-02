#include <stdio.h>
int isPalindrome(int a);
int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int j = 0;j<a;j++){
        if(isPalindrome(arr[j])){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
int isPalindrome(int a){
    int palindrome = 1;
    int reversed = 0;
    int temp = a;
    int b;
    while(temp>0){
        b = temp%10;
        temp = temp/10;
        reversed = (reversed*10)+b;
    }
    if(a!=reversed){
        palindrome=0;
    }
    return palindrome;

    }
    
