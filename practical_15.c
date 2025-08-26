#include <stdio.h>
#include<unistd.h>
int main(){
    int time_cooldown;
    printf("how many time do you want to enter : ");
    scanf("%d",&time_cooldown);
    if(time_cooldown>0){
        while(time_cooldown>0){
            sleep(1);
            printf("%d\n",time_cooldown);
            time_cooldown--;
        }
    }
        else
            printf("Invalid Input");

    return 0;

}
