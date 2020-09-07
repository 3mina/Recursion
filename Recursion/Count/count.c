#include <stdio.h>

int count(int n);

int main(void){

    int n;
    printf(" ** This program counts the number of digits in an integer ** \n enter an integer: ");
    scanf("%i", &n);
    printf(" The number of digits in the number is :  %d \n\n",count(n));
    return 0;
}
int count(int n){

    if(n==0){
        return 0;
    }

    return 1+count(n/10);
}
