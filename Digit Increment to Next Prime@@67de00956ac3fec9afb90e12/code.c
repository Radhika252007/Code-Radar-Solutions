// Your code here...
#include <stdlib.h>
int incrementToPrimeDigits(int n){
    int reversed = 0;
    if(n==0){
        return 2;
    }
    while(n!=0){
        int digit = n%10;
        if(digit>=7){
            digit = 2;
        }
        else if(digit>=5&&digit<7){
            digit = 7;
        }
        else if(digit>=3&&digit<5){
            digit=5;
        }
        else if(digit==2){
            digit = 3;
        }
        else if(digit ==1){
            digit=2;
        }
        reversed = reversed*10+digit;
        n = n/10;
    }
    int original =0;
    while(reversed!=0){
        int integer = reversed%10;
        original = original*10+integer;
        reversed= reversed/10;
    }
    return original;
}