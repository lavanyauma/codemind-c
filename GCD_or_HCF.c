#include<stdio.h>
int main()
{
    int x,i,y,gcd;
    scanf("%d%d",&x,&y);
    for(i=1;i<=x&&i<=y;i++)
    {
        if(x%i==0&&y%i==0)
        gcd=i;
    }
    printf("%d",gcd);
    return 0;
}