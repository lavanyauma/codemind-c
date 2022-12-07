#include<stdio.h>
int main()
{
	int i,j,n,c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("
");
	}
}