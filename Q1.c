#include<stdio.h>
#include<string.h>

int main()
{
    char s[100000];
    scanf("%s",s);
    int n,c=0,i,k;
    n=strlen(s);
    k=n;
    for(i=0;i<n;i++)
    {
        if(s[i]=='.')
        {
            c++;
            k=i+1;
        }
    }
    if(c==1&&k<n)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}