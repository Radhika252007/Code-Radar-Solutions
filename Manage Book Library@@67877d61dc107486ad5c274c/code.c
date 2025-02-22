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
    struct Book author[N];
    for(int j=0;j<N;j++){
        scanf("%s %s %d",&author[j].book,&author.author[j],&author.price[j]);
    }
    int threshold;
    scanf("%d",&threshold);
    for(int k=0;k<N;k++){
        if(author[k].price>threshold){
            printf("Title: %s, Author: %s, Price: %.2f\n",author[k].book,author[k].author,author[k].price);
        }
    }
}