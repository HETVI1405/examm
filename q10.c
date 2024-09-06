#include<stdio.h>
#include<conio.h>

void main()
{
	
	int a,b,c;
	
	for(a=1;a<=5;a++)
	{
		for(c=a ;c<=0;c++)
		{
			printf("  ");
		}
		for(b=a;b>=1;b--)
		{
			if(b%2==0){
				printf("1 ");
			}
			else{
				printf("0 ");
			}
		}
		printf("\n");
	}
}

