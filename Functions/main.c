#include <stdio.h>
#include "myfunction.h"
#include "mymenu.h"

int main()
{
    int x,y;
    int m;
    while(1){
        mymenu();

    printf("Please select menu (1-5): ");
    scanf("%d",&m);

    switch(m){
    case 1:
        printf("Result is %d\n\n",add());
        break;
    case 2:
        printf("Enter value of x and y: ");
        scanf("%d %d",&x,&y);
        sub(x,y);
        break;
    case 3:
        printf("Enter value of x and y: ");
        scanf("%d %d",&x,&y);
        printf("%f",div(x,y));
        break;
    case 4:
        printf("Result is %d\n\n",mul());
        break;
    case 5:
        mod();
        break;
    case 6:
        exit(0);
    }
    }

    return 0;
}


void mod(){
 int a,b,c;
    printf("Enter value of a and b: ");
    scanf("%d %d",&a,&b);
    c = a % b;
    printf("Result is %d ",c);
}

