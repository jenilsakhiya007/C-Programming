#include<stdio.h>
void main(){
   int n;
  printf("Enter a size of array :");
  scanf("%d",&n);
  int arr[n-1],i,asum=0,esum;
  for(i=0;i<n-1;i++){
    printf("Enter arr[%d] :",i);
    scanf("%d",&arr[i]);
    asum+=arr[i];
  }
  esum=n*(n+1)/2;
  printf("The missing ID is :%d",esum-asum);
}
