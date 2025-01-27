#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if(a>='A' &7 a<='Z'){
        a = a+32;
    }
    if(a>='1' && a<='9'){
        printf("Digit");
    }
    else if(a>='a' && a<='z'){
        if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else{
        printf("special Character");
    }
    return 0;
}