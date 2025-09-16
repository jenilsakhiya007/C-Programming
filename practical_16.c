#include<stdio.h>
int main(){
    int matchsticks=21,user_pick,com_pick;
    while(matchsticks>1){
        printf("remaing matchsticks is : %d\n",matchsticks);
        
        printf("user picks : ");
        scanf("%d",&user_pick);
          if(user_pick<1 || user_pick>4){
            printf("wrong move! please enter choice between 1 to 4\n");
            continue;
          }
  
        matchsticks-=user_pick;
         if(matchsticks==1){
            printf("\nremaing matchsticks is only 1!");
            printf("\ncomputer is win....");
            break;
         }


        com_pick=5-user_pick;
        printf("\ncomputer picks : %d\n",com_pick);
        matchsticks-=com_pick;
        if(matchsticks==1){
            printf("\nremaing matchsticks is only 1!");
            printf("\ncomputer is win....");
            break;
        }
    }


    return 0;
}