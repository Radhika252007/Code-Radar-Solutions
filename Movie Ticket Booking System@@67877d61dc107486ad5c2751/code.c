// Your code here...
#include <stdio.h>
#include <string.h>
struct MovieTicket{
    char movie[100];
    char type[200];
    float price;
};
int main(){
    int N;
    scanf("%d",&N);
    struct MovieTicket revenue[N];
    for(int i=0;i<N;i++){
        scanf("%s %s %f",&revenue[i].movie,&revenue[i].type,&revenue[i].price);
    }
    float stand = 0, premium = 0, vip=0;
    for(int j=0;j<N;j++){
        if(strcmp(revenue[j].type,"Standard")==0){
            stand += revenue[j].price;
        }
        else if(strcmp(revenue[j].type,"Premium")==0){
            premium+= revenue[j].price;
        }
        else{
            vip+=revenue[j].price;
        }
    }
    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f",stand,premium,vip);
    return 0;
}