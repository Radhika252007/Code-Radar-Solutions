// Your code here...
// Your code here...
#include <stdio.h>
struct student{
    int roll;
    char name[200];
    float marks;
    char grade;
};
int main(){
    int N;
    scanf("%d",&N);
    struct student school[N];
    for(int i=0;i<N;i++){
        scanf("%d %s %f",&school[i].roll,&school[i].name,&school[i].marks);
    }
    for(int j=0;j<N;j++){
        if(school[j].marks>=85){
            grade[j] = 'A';
        }
        else if((school[j].marks<85)&&(school[j].marks>=70)){
            grade[j] = 'B';
        }
        else{
            grade[j] = 'C';
        }
    }
    for(int k=0;k<N;k++){
        printf("Roll Number: %d, Name: %s, Grade: %c\n",school[k].roll,school[k].name;school[k].grade);
    }
    return 0;
}