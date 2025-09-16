#include<stdio.h>
int main(){
    float distance=0.5;
    int min=1;
    while(1){
        if(distance<=10){
        printf("Minute %d: destance coverd =  %f km\n",min,distance);
        
    distance+=0.5;
    min+=1;
        }
    if(distance>10) break;
    
    }
    return 0;
}