#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Selection_sort(long int a[],long int n)
{
    long int i,min,j,temp;
    for(i=0;i<n;i++)
    {
        min=i;
        {
            for(j=i+1;j<n;j++)
            {
                if(a[j]<a[min])
                {
                    min=j;
                }
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    printf("Selection sort Array:");
    for(i=0;i<n;i++)
    {
        printf("%ld ",a[i]);
    }
    printf("\n");
}
void Bubble_sort(long int a[],long int n)
{
    long int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Bubble sort Array:");
    for(i=0;i<n;i++)
    {
        printf("%ld ",a[i]);
    }
    printf("\n");
}
int main()
{
    long int n;
    scanf("%ld",&n);
    long int a[n],i;
    for(i=0;i<n;i++)
    {
        a[i]=i;
    }
    clock_t start1,end1;
    long int t1;
    start1=clock();
    Selection_sort(a,n);
    end1=clock();
    t1=end1-start1;
    printf("Total elapsed time for Selection sort: %f\n", (double)t1/(double)CLOCKS_PER_SEC);
    clock_t start2,end2;
    long int t2;
    start2=clock();
    Bubble_sort(a,n);
    end2=clock();
    t2=end2-start2;
    printf("Total elapsed time for Bubble sort : %f\n", (double)t2/(double)CLOCKS_PER_SEC);
}