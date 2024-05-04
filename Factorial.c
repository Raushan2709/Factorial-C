#include<stdio.h>
int main()
{
    int n;
    printf("enter no : ");
    scanf("%d",&n);
    int prd=1;
    for (int i=1;i<=n;i++)
    {
        prd=prd*i;
    }
    if(n==0)
    {
        prd=1;
    }
    printf("%d",prd);
    return 0;
}