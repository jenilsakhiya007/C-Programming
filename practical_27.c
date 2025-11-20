#include<stdio.h>
int fibo(int x){
    int y;
    if(x==1 ||x==2)
    return 1;

     y=fibo(x-1)+fibo(x-2);
    return y;

}
int main(){
    printf("Name : Jenil Sakhiya\n");
    printf("ID :25CE104\n\n");
    int n,i;
    printf("Enter Number of month : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Month %d Saving :%d\n",i,fibo(i));
    }
   
    

    return 0;
}