#include <stdio.h>
#include <string.h>

void reverse(char *s, int size);

int main(void){
    char s[50];
    int size;
    printf(" **** This program prints a selected string in the reverse order ****\n enter the string: ");
    scanf("%s", &s);
    size=strlen(s);
    reverse(s,size);

    return 0;

}
 void reverse(char *s, int size){
    if(size==0){
        return;
    }
    printf("%c",s[size-1]);
    reverse(s,size-1);
 }
