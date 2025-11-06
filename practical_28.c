#include<stdio.h>
#include<string.h>
#define n 3
union book
{
 long ac;
 char title[20];
 char author[20];
 float price;

};


int main(){
    union book b[n];
    int choice,i=0,flage;
    char search[20];
    do{
        printf("1.Add Book Details\n");
        printf("2.check\n");
        printf("3.Exit\n");
        printf("Enter your choice :");
        scanf("%d",&choice);
        switch(choice){
            case 1 :
            printf("\nEnter Book Title :");
           fflush(stdin);
           gets(b[i].title);
           printf("Enter a Author Name  :");
           fflush(stdin);
           gets(b[i].author);
           printf("Enter Accession number :");
           scanf("%ld",&b[i].ac);
           printf("Enter Price :");
           scanf("%f",&b[i].price);
           i++;
           break;
           case 2:
           printf("Enter a book Title to Check :");
           fflush(stdin);
           scanf("%[^\n]s",search);
           for(int k=0;k<i;k++){
           if(strcmp(search,b[i].title)==0){
            flage=0;
           }
           else{
            flage=1;
        }
        }
        if(flage==0) printf("\nBook is Available\n");
        else printf("\nBook is alredy issued!\n");
        break;
        case 3:
        return  0;
        }

    }while(i<4);
 
    
}
