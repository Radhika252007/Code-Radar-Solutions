// Your code here...
#include <stdio.h>
struct student{
    int roll;
    char name[100];
    float marks;
};
int main(){
    int N;
    scanf("%d",&N);
    struct student school[N];
    for(int i=0;i<N;i++){
        scanf("%d %s %f",&school[i].roll,&school[i].name,&school[i].marks);
    }
    float sum = 0;
    for(int j=0;j<N;j++){
        sum += school[j].marks;
    }
    float avg = sum/(float)N;
    printf("Total Marks: %.2f\n",sum);
    printf("Average Marks: %.2f",avg);

}