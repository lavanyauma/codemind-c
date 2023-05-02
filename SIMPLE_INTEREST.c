#include<stdio.h>
int ss(int p,int t,int r);
int main()
{
    int p,t,r;
    scanf("%d%d%d",&p,&t,&r);
    int x=ss(p,t,r);
}
int ss(int p,int t,int r)
{
    int s;
    s=(p*t*r)/100;
    {
      printf("%d",s);
    }
    return 0;
}