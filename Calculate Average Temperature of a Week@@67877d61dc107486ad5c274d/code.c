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
    float sum=0;
    for(int j=0;j<7;j++){
        sum += average[j].temp;
    }
    float avg = sum/7.0;
    printf("Average Temperature: %.2f",avg);
}
