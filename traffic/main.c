#include<stdio.h>
#include<windows.h>
#include<mmsystem.h>


int main(){
        char ch;
        while(1){
            ch = getchar();
            if(ch== 'c'){
                PlaySound(TEXT("music.mp3"),NULL,SND_SYNC);
            }
            if(ch=='q'){
                break;
            }

        }
        printf("Quit");
        return 0;
}
