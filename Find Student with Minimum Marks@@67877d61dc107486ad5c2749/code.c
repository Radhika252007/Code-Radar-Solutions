// Your code here...
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
    float min = school[0].marks;
    int k=0;
    for(int j=1;j<N;j++){
        if(school[j].marks<min){
            k=j;
        }
    }
    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f",school[k].roll,school[k].name,school[k].marks);
    return 0;
    }