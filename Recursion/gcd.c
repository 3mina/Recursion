#include <stdio.h>

int gcd(int a, int b);

int main(void){

    int a,b;
    printf("*** This program calculates the GCD of two numbers **** \ enter two integers: ");
    scanf("%i %i", &a,&b);
    printf("the gcd is: %i", gcd(a,b));
    return 0;
}

int gcd(int a, int b){

    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a>b){
    gcd(b,a % b);
    }
    else{
        gcd(a,b % a);
    }


}
