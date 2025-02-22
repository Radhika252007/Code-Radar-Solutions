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
    int passed = 1;
    for(int j=0;j<N;j++){
        if(school[j].marks<50){
            passed = 0;
        }
    }
    if(passed){
        printf("All Passed");
    }
    else{
        printf("Not All Passed");
    }
    return 0;
    }