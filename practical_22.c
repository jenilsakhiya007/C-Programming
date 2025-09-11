#include<stdio.h>
int main()
{
    char arr[5][10];
    int i,reserved_seat,row,column,j;
    for(i=0; i<5; i++)
    {
        for(j=0; j<10; j++)
        {
            arr[i][j]='O';
        }
    }
    printf("Welcome to Theater\n");
    printf("Theater has 5 row and 10 column ");
    printf("\nEnter the number of reserved seats : ");
    scanf("%d",&reserved_seat);
    for(i=1; i<=reserved_seat; i++)
    {
        printf("\nEnter Row and seat number for reserved seat %d : ",i);

        scanf("%d %d",&row,&column);
        if(row>0 &&row<=5 && column>0 && column<=10)
            arr[row-1][column-1]='X';
        else {
        printf("Invalid Input !\n");
        i--;
    }
    }
    for(i=0; i<5; i++)
    {
        printf("row %d :",i+1);
        for(j=0; j<10; j++)
        {
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
