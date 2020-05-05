#include <stdio.h>
#include <windows.h>
#include<mmsystem.h>

int main(){
    char ch;
    while(1){
        ch = getchar();
        if(ch == 'c'){
            PlaySound(TEXT("sound.wav"),NULL,SND_SYNC);
        }
        if(ch == 'q'){
            break;
        }
    }
    printf("Thank you for using our apps");
    return 0;
}
