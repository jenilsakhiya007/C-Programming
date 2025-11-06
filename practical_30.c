#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter Items :");
    scanf("%d",&n);
    float arr[n],*p,tempt;
    p=arr;
    for(i=0;i<n;i++){
        printf("Enter arr[%d] :",i);
        fflush(stdin);
        scanf("%f",p);
        p++;
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<4;j++){
          if(arr[i]>arr[j]){
            tempt=arr[i];
            arr[i]=arr[j];
            arr[j]=tempt;
          }
        }
    }
    p=arr;
    for(i=0;i<n;i++){
        printf("%.2f\t",*p);

        p++;
    }
    
    return 0;
}