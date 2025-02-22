// Your code here...
#include <stdio.h>
struct Book{
    char book[100];
    char author[100];
    int price;
};
int main(){
    int N;
    scanf("%d",&N);
    struct Book auth[N];
    for(int j=0;j<N;j++){
        scanf("%s %s %d",&auth[j].book,&auth.author[j],&auth.price[j]);
    }
    int threshold;
    scanf("%d",&threshold);
    for(int k=0;k<N;k++){
        if(auth[k].price>threshold){
            printf("Title: %s, Author: %s, Price: %.2f\n",auth[k].book,auth[k].author,auth[k].price);
        }
    }
}