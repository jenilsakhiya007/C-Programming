#include<stdio.h>
#include<string.h>
#define n 3
struct cotch{
   char cname[30];
   int age;
   int exp;
};
struct  team{
    char tname[30];
    char type[30];
    struct cotch c[n];
};
struct  team t[n];
int main(){
    int choice,i=0,j=0,k=0,found,s;
    char search[30];
    do{ 
        printf("\n_______Welcome to CHARUSAT internal Sport System_______\n");
        printf("\n1.Add new Team\n");
        printf("2.Search Team\n");
        printf("3.Display team\n");
        printf("4.Cotch Details\n");
        printf("5.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1 :
            printf("Enter A new Team : ");
            fflush(stdin);
            gets(t[i].tname);
            printf("Team type :");
            fflush(stdin);
            gets(t[i].type);
            printf("Enter Cotch name :");
            fflush(stdin);
            gets(t[i].c[i].cname);
            printf("Enter age :");
            fflush(stdin);
            scanf("%d",&t[i].c[i].age);
            printf("Enter Experians :");
            fflush(stdin);
            scanf("%d",&t[i].c[i].exp);
            i++;
            break;
            case 2:  
            printf("Enter Team for found  :");
            fflush(stdin);
            gets(search);
            for(s=0;s<i;s++){
             if( strcmp(search,t[s].tname)==0 ){
                printf("......Team Founded !......\n");
                 printf("Team name : %s\n",t[s].tname);  
                printf("Team Type : %s\n",t[s].type);
                found=1;
            }
            else {
                found=0;
                continue;
            }
        }
        if(found==0){
            printf(".......No Team Founded !......\n");
        }
           break;
            case 3:
            printf("\n____Team List____\n");
        for(k=0;k<i;k++){
                printf("Team name(%d) : %s\n",k+1,t[k].tname);  
                printf("Team Type : %s\n",t[k].type);
                printf("Cotch Name : %s\n",t[k].c[k].cname);
        }
            break;
            case 4:
            j=0;
            printf("\n____Cotch Details :____\n\n");
            for(j=0;j<i;j++){
            printf("Cotch Name (%d): %s\n",j+1,t[j].c[j].cname);
                printf("Age : %d\n",t[j].c[j].age);
                printf("Experians : %d\n",t[j].c[j].exp);
            }
                break;
                case 5:
                return 0;


            
        }
    }while(n<4);
    
    
    return 0;
}