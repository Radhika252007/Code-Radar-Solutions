// Your code here...
#include <stdio.h>
struct student{
    int roll;
    char name[200];
    float marks;
};
int main(){
    int N;
    scanf("%d",&N);
    struct student school[N];
    for(int i=0;i<N;i++){
        scanf("%d %s %f",&school[i].roll,&school[i].name,&school[i].marks);
    }
    for(int j=0;j<N;j++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",school[j].roll,school[j].name,school[j].marks);
    }
    return 0;
}