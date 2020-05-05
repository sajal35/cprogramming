#include <stdio.h>


int main(){
    int f,c;
    printf("Enter F value: ");
    scanf("%d",&f);

    c = (f-32) * 5/9;
    printf("CODE IT %d F is %d C ",f,c);
    return 0;
}
