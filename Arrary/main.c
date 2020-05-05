#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

int main()
{
   int n;
   char  ch;
   while(1){
     ch = getchar();
     if(ch == 'p'){
        n = rand() % 6 + 1;
        printf("%d",n);
     }

     if(ch=='q'){
        break;
     }
   }
   printf("Game Over");
    return 0;
}
