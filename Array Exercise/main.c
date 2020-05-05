#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int n;
    int sum = 0;
    int r;
    printf("Enter any number: ");
    scanf("%d",&n);

    // 231
    while(n!=0){
        r = n % 10;
        sum = sum + r;
        n = n/10;
    }

    printf("sum = %d",sum);
    return 0;
}
