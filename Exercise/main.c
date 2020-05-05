#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    int r;
    int sum = 0;
    int rameDai;
    printf("Enter value of n: ");
    scanf("%d",&n);
    rameDai =n;
    while(n!=0){
        r = n % 10;
        sum = sum  + pow(r,3);
        n = n/10;
    }

    if(rameDai==sum){
        printf("it is armstrong number");
    }else{
        printf("It is not");
    }
    return 0;
}
