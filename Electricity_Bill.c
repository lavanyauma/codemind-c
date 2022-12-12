#include<stdio.h>
int main()
{
    int u,uc=0;
    float b,sc,tc,c;
    scanf("%d",&u);
    if(u<200)
    {
        c=1.20;
        b=u*c;
    }
    else if(u>=200 && u<400)
    {
        c=1.40;
        b=u*c;
    }
    else if(u>=400 && u<600)
    {
        c=1.60;
        b=u*c;
    }
    else if(u>=600 && u<800)
    {
        c=1.80;
        b=u*c;
    }
    else
    {
        c=2.00;
        b=u*c;
    }
    if(b>=400)
    {
        sc=b*0.15;
        tc=b+sc;
        printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",u,c,b,sc,tc);
    }    
    else
    {
        tc=b;
        printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",u,c,b,sc,tc);
    }
}