#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n=5,j;
    
    
    for(i=1;i<=n;i++)
    {
    	for(j=i;j>=1;j--)
    	{
    		
    		
            if(j%2==0)
    		{
    			printf("1 ");
    		
			}
			else
			{
				printf("0 ");
			}
		
		}
		printf("\n");
	}
	
	
	
}