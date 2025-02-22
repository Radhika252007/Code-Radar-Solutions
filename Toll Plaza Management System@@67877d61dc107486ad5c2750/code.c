// Your code here...
#include <stdio.h>
#include <string.h>
struct Vehicle{
    char plate[200];
    char type[200];
    float price;
};
int main(){
    int N;
    scanf("%d",&N);
    struct Vehicle toll[N];
    for(int i=0;i<N;i++){
        scanf("%s %s %f",&toll[i].plate,&toll[i].type,&toll[i].price);
    }
    float cars=0,trucks=0,bikes=0;
    for(int k=0;k<N;k++){
        if(strcmp(toll[k].type,"Car")){
            cars+= toll[k].price;
        }
        else if(strcmp(toll[k].type,"Truck")){
            trucks+= toll[k].price;
        }
        else{
            bikes += toll[k].price;
        }
    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",cars,trucks,bikes);
}