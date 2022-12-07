#include<stdio.h>
int main()
{
	int i,j,n,c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf("%d ",j);
		}
		printf("
");
	}
}