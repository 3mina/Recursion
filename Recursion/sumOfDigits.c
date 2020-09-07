#include <stdio.h>

int sum(int n);

int main(void){

    int n;
    printf(" **** This is a program to calculate the sum of a digits of a chosen number ****\n enter an integer: ");
    scanf("%i", &n);
    printf("The sum of digits of %i is: %i ",n, sum(n));

    return 0;
}
int sum(int n){
    if(n<1){
        return n/10;
    }

    return n%10+sum(n/10);

}

