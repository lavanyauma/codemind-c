#include<stdio.h>
void dd(int n);
int main()
{
    int n,a;
    scanf("%d",&n);
    dd(n);
}
void dd(int n)
{
    int a;
    a=(n*(n-3)*0.5);
    printf("%d",a);
}