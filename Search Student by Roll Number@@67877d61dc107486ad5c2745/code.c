// Your code here...
#include <stdio.h>
struct student{
    int roll;
    char namr[200];
    float marks;
};
int main(){
    int N;
    scanf("%d",&N);
    struct student school[N];
    for(int i=0;i<N;i++){
        scanf("%d %s %f",&school[i].roll, &school[i].name,&school[i].marks);
    }
    int rollno;
    int found = 1;
    scanf("%d",&rollno);
    for(int j=0;j<N;j++){
        if(school[j].roll==rollno){
            printf("Roll Number: %d, Name: %s, Marks: %.2f",school[j].roll,school[j].name,school[j].marks);
            found = 0;
        }
    }
    if(found){
        printf("Student not found");
    }
}