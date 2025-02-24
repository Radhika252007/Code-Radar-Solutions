// Your code here...
#include <stdio.h>
struct Student{
    int roll;
    char name[200];
    float marks;
};
void swap(struct Student *a, struct Student *b){
    struct Student temp = *a;
    *a = *b;
    *b = temp ;
}

int main(){
    int N;
    scanf("%d",&N);
    struct Student sort[N];
    for(int i=0;i<N;i++){
        scanf("%d %s %f",&sort[i].roll,&sort[i].name,&sort[i].marks);
    }
    for(int i=0;i<N-1;i++){
        for(int j=0;j<N-i-1;j++){
            if(sort[j].marks<sort[j+1].marks){
                swap(&sort[j],&sort[j+1]);
            }
        }
    }
    for(int k=0;k<N;k++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",sort[k].roll,sort[k].name,sort[k].marks);
    }

}