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
    float threshold;
    scanf("%f",&threshold);
    int count = 0;
    for(int j=0;j<N;j++){
        if(school[j].roll>threshold)count++;
    }
    printf("Count of students scoring above %.2f: %d",threshold,count);
    return 0;
    }