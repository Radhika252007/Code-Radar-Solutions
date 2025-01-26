#include <stdio.h>


int main() {
    char a;
    scanf("%d",&a);
    if(a>="A"&& a<="Z"){
        printf("Uppercase");
    }
    if(a>="a" && a<="z"){
        printf("Lowercase");
    }
    return 0;
}