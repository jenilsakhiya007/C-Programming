#include<stdio.h>
void main(){
    int withdraw,balance,amount;
    balance=5000;
    printf("enter the amount : ");
    scanf("%d",&withdraw);
    while((balance-withdraw)>=1000 && withdraw>0){
            balance=balance-withdraw;
            
    printf("your current balance is : %d",balance);
    break;
    

    }
    if(withdraw>4000 || withdraw<0)
     printf(" Error! you are not able to withdraw");
   
}
