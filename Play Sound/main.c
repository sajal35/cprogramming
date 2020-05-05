#include <stdio.h>
#include <windows.h>
#include <mmsystem.h>

int main(){
    int m;

    for(;;){
    menu();
    scanf("%d",&m);
    switch(m){
    case 1:
            add();
            break;
    case 2:
            sub();
            break;
    case 3:
            printf("%d\n\n",mul(4,2));
            break;
    case 4:
            printf("Division Coming soon");
            break;
    case 5:
            exit(0);
    }

    }

    return 0;
}

void menu(){
    printf("Please select a menu(1-5): \n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Mult\n");
    printf("4.Divide\n");
    printf("5.Exit\n");
}

void add(){
    int a,b,c;
    printf("Enter value of a & b: ");
    scanf("%d %d",&a,&b);
    c = a + b;
    printf("Result is %d\n\n",c);
    PlaySound(TEXT("sound.wav"),NULL,SND_SYNC);
}

void sub(){
    int a,b,c;
    printf("Enter value of a & b: ");
    scanf("%d %d",&a,&b);
    c = a - b;
    printf("Result is %d\n\n",c);
    PlaySound(TEXT("sound.wav"),NULL,SND_SYNC);
}

int mul(int a,int b){
    int c;
    c = a * b;
    return c;
}
