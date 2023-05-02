#include<stdio.h>
void ss(int p,int t,int r);
int main()
{
    int p,t,r;
    scanf("%d%d%d",&p,&t,&r);
    ss(p,t,r);
}
void ss(int p,int t,int r)
{
    int s;
    s=(p*t*r)/100;
    {
      printf("%d",s);
    }
}