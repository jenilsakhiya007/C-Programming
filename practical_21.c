#include<stdio.h>
int main(){
    int i=0,cp=0,cn=0,ce=0,co=0,cz=0;
    printf("Enter an array");

    int arr[25];
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        if(arr[i]>=0) cp++;
        else cn++;
        if(arr[i]%2==0) ce++;
        else  co++;
        if(arr[i]==0) cz++;
    }
    printf(" Positive number : %d\n",cp-cz);
     printf(" Negative number : %d\n",cn);
      printf(" Even numbers : %d\n",ce);
       printf(" Odd numbers : %d\n",co);
        printf(" 0 numbers: %d\n",cz);

}
