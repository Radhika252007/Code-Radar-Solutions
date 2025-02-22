// Your code here...
#include <stdio.h>
struct Employee{
    int id;
    char name[200];
    float salary;
    float incr;
};
int main(){
    int N;
    scanf("%d",&N);
    struct Employee bonus[N];
    for(int i=0;i<N;i++){
        scanf("%d %s %f",&bonus[i].id,&bonus[i].name,&bonus[i].salary);
    }
    for(int j=0;j<N;j++){
        if(bonus[j].salary<50000){
            bonus[j].incr = (0.1)*bonus[j].salary;
        }
        else{
            bonus[j].incr = (0.05)*bonus[j].salary;
        }
    }
    for(int k=0;k<N;k++){
        printf("Employee ID: %d, Name: %s, Bouns: %.2f\n",bonus[k].id,bonus[k].name,bonus[k].incr);
    }
}