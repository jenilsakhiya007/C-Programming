#include <stdio.h>
int main(){
    int choice;
    int amount;

    printf("enter a 1st for burger\n :");
    printf("enter a 2nd  for pizza\n");
    printf("enter a 3rd for pasta\n");
    printf("enter a 4th sandwich\n");
    printf("enter a 5th french fries\n");
    printf("enter your choice\n");
    scanf("%d",&choice);

    switch(choice){
    case 1 :
        printf("you choose burger\n");
        amount+=150;
        printf(" your amount is : %d",amount);
        break;
    case 2 :
         printf("you choose pizza\n");
        amount+=200;
        printf(" your amount is : %d",amount);
        break;
    case 3 :
        printf("you choose pasta\n");
        amount+=120;
        printf(" your amount is : %d",amount);
        break;
    case 4 :
        printf("you choose sandwich\n");
        amount+=100;
        printf(" your amount is : %d",amount);
        break;
    case 5 :
        printf("you choose French fries\n");
        amount+=80;
        printf(" your amount is : %d",amount);
        break;


    }
    
    return 0;
}
