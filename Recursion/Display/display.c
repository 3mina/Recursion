#include <stdio.h>

void natural(int n);

int main(void){

    int n;
    printf(" ****This program displays natural numbers from 1 to n **** \n enter an integer: ");
    scanf("%i", &n);
    printf("The natural numbers are: ");
    natural(n);
    return 0;
}
void natural(int n){
    if(n==0){
        return 0;
    }
    natural(n-1);
    printf("%i ", n);
    }

