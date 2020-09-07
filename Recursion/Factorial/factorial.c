#include <stdio.h>

int fact(int n);

int main(void){

    int n;
    printf("**** This program calculates the factorial of a number using recursion **** \n enter an integer: ");
    scanf("%i",&n);
    printf("the factorial of %i is: %i ", n, fact(n));
    return 0;
}

int fact(int n){
        if(n==1){
        return 1;
    }
    return n*fact(n-1);

}
