// Your code here...
// Your code here...
#include <stdio.h>
struct Rectangle{
   int length;
   int breadth;
};
int main(){
    int N;
    scanf("%d",&N);
    struct Rectangle area[N];
    for(int i=0;i<N;i++){
        scanf("%d %d",&area[i].length,&area[i].breadth);
    }
    for(int j=0;j<N;j++){
        float A = (float)(area[j].length)*(float)(area[j].breadth);
        float perimeter = (float)2*(float)(area[j].length + area[j].breadth);
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n",j+1,A,perimeter);

    }
    return 0;
    }