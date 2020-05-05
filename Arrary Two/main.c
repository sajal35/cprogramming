// ATM Program

#include<stdio.h>
#include "myfunction.h"

int main(){
    int m;
    while(1){
         menu();
    printf("Please select menu(1-4): ");
    scanf("%d",&m);

    switch(m){
    case 1:
        deposit();
        break;
    case 2:
        withdraw();
        break;
    case 3:
        checkBalance();
        break;
    case 4:
        exit(0);
    }

    }

    return 0;
}
