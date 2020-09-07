#include <stdio.h>

void print(int *array,int size);

int main(void){

    int n;
    printf(" **** This program displays the content of an array **** \n enter the number of elements in the array: ");
    scanf("%i", &n);
    int array[n];
    for(int i =0; i <n; i++){
        printf("element - %i: ",i);
        scanf("%i",&array[i]);
     }
     printf("the elements are: ");
     print(array,n);
    return 0;

}
void print(int *array, int size){
    if(size==0){
            return;
    }
    print(array, size-1);
    printf("%i ", array[size-1]);
}
