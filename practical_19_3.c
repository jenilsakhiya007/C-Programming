#include<stdio.h>
int main(){
int n=5,i,s,j;
int h=2*5-1;
for(i=1;i<=n;i++){
    for(s=1;s<i;s++){
        printf(" ");
    }
    for(j=n-i+1;j>=1;j--){
        printf("%d",j);
    }
    for(j=2;j<=n-i+1;j++){
        printf("%d",j);
    }
   printf("\n");
}
for(i=n-1;i>=1;i--){
    for(s=1;s<i;s++){
        printf(" ");
    }
    for(j=n-i+1;j>=1;j--){
        printf("%d",j);
    }
    for(j=2;j<=n-i+1;j++){
        printf("%d",j);
    }
   printf("\n");
}
return 0;
}
