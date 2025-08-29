#include<stdio.h>
int main(){
    int i,j,s,h,k;
    for(i=1;i<=4;i++){
        char ch='A';
        for(s=1;s<=4-i;s++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%c",ch++);
        }

    
        int a=i-1;
        for(k=1;k<i;k++){
            if(i==2){
            h=a+64;
            printf("%c",h);
            }
            else{
                h=a+64;
            printf("%c",h);
            a--;

            }
             
        }
     printf("\n");
}
   for(i=3;i>=1;i--){
        char ch='A';
        for(s=1;s<=4-i;s++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%c",ch++);
        }

    
        int a=2;
        for(k=1;k<i;k++){
          
          if(i==2){
            h=65;
          printf("%c",h);
          }
          else{
            h=a+64;
          printf("%c",h);
          a--;
          }
          
           
        }  
        printf("\n");
    } 
    return 0;

}