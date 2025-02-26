// Your code here...
#include <stdio.h>
#include <string.h>
void sort(char *a){
    int len = strlen(a);
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-i-1;j++){
            if(a[j]>a[j+1]){
                char temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int main(){
    char ch[200],ch2[200];
    scanf("%s",&ch);
    scanf("%s",&ch2);
    int len1 = strlen(ch);
    int len2 = strlen(ch2);
    if(len1!=len2){
        printf("No");
        return 0;
    }
    sort(ch);
    sort(ch2);
    if(strcmp(ch,ch2)==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
 
}