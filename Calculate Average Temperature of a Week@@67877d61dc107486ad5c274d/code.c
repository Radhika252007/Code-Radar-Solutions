// Your code here...
#include <stdio.h>
struct Day{
char day[100];
float temp;
};
int main(){
    struct Day average[7];
    for(int i=0;i<7;i++){
        scanf("%s %f",&average[i].day,&average[i].temp);
    }
    float avg=0;
    for(int j=0;j<7;j++){
        avg += average[j].temp;
    }
    printf("Average Temperature: %.2f",avg);
}
