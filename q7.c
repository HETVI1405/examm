#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,sum=0;
	printf("enter array size:");
	scanf("%d",&n);
	int a[n];
	
	for(i=1;i<=n;i++)
	{
		printf("a[i]:");
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		sum = sum + a[i];
	}

	printf("sum of array:%d",sum);
	
	
	
}