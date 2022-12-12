#include<stdio.h>
int ss(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int x=ss(n);
}
int ss(int n)
{
    if(n%4==0)
    {
        printf("%d",n/4);
    }
    else
    {
        printf("%d",(n/4)+1);
    }
    return 0;
}