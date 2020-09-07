#include <stdio.h>
int fib(int n);
int main()
{
    int n;

    do{
        printf("enter an integer ( <20 ) : \n");
        scanf("%i",&n);
    }while (n>=20);

    printf("%i",fib(n));

    return 0;
}
int fib(int n){

    if(n<=1){ //as fib(1)=1 and fib(0)=0
        return n;
    }
    return fib(n-1)+fib(n-2); //recursive call
    }
