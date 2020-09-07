#include <stdio.h>

int sum(int n);

int main(void){

    int n;
    printf(" **** This programs displays the sum of numbers from 1 to n **** \n enter an integer: ");
    scanf("%i", &n);
    printf(" The sum of numbers from 1 to %i is: %i",n, sum(n));

    return 0;
}

int sum(int n){
    if (n==0){
        return 0;
        }
    return n+sum(n-1);
}
