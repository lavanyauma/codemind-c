#include<stdio.h>
int dd(int n);
int main()
{
    int n,a;
    scanf("%d",&n);
    int x=dd(n);
}
int dd(int n)
{
    int a;
    a=(n*(n-3)*0.5);
    printf("%d",a);
}