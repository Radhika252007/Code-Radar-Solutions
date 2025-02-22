// Your code here...
#include <stdio.h>
#include <string.h>
struct Subscription{
    char name[200];
    char type[200];
    float price;
};
int main(){
    int N;
    scanf("%d",&N);
    struct Subscription revenue[N];
    for(int i=0;i<N;i++){
        scanf("%s %s %f",&revenue[i].name,&revenue[i].type,revenue[i].price);
    }
    int basic = 0, premium = 0, stand = 0;
    float rev1 = 0,rev2 =0,rev3 =0;
    for(int j=0;j<N;j++){
        if(strcmp(revenue[j].type,"Basic")==0){
            basic++;
            rev1 += revenue[j].price;
        }
        else if(strcmp(revenue[j].type,"Premium")==0){
            premium++;
            rev3 += revenue[j].price;
        }
        else{
            stand++;
            rev2 += revenue[j].price;
        }
    }
    printf("Basic: %d Users, Revenue: %.2f, Standard: %d Users, Revenue: %.2f, Premium: %d, Revenue: %.2f",basic,rev1,stand,rev2,premium,rev3);

}