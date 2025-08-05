#include<stdio.h>
int main()
{
float discount;
int finalamount;
int totalamount;
printf("enter your amount ");
scanf("%d",&totalamount);


if(totalamount<=1000){
    discount=0;
    finalamount=totalamount-discount;
    printf("total amount = %d\n",totalamount);
    printf("your discount is : %.2f\n",discount);
    printf("final amount = %d\n",finalamount);

}
else if(totalamount>1000 && totalamount<5000){
    discount=0.01;
    finalamount=totalamount-discount;
     printf("total amount = %d\n",totalamount);
     printf("your discount is :%.2f\n",discount);
    printf("final amount = %d\n",finalamount);

}
else{
    discount=0.02;
    finalamount=totalamount-discount;
    printf("total amount = %d\n",totalamount);
     printf("your discount is :%.2f\n",discount);
    printf("final amount = %d\n",finalamount);



}
printf("thanks for visit our shope");
return 0;
}
//this code is made by jenil sakhiya...
