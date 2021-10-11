#include<stdio.h>
int main()
{
    int r,c,k;
    printf("Enter the value of row and column:");
    scanf("%d %d",&r,&c);
    k=r*c;
    int a[r][c],i,j;
    printf("Enter the values of Elements:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int b[k],n=0;
    printf("\n Initial 2D Array:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            b[n]=a[i][j];
            n++;
        }
    }
    printf("\n Final 1D Array: ");
    for(i=0;i<k;i++)
    {
        printf("%d ",b[i]);
    }
}