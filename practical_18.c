 #include<stdio.h>
int main(){
    int n;
    printf("enter the size of vertically : ");
    scanf("%d",&n);
    int m;
    printf("\nenter the size of horizontally : ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("%2d ",i*j);
        }
        printf("\n");
    }
    return 0;
}
