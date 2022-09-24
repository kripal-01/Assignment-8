

// 13.
// ABCDEFGFEDCBA
// ABCDEF FEDCBA
// ABCDE   EDCBA
// ABCD     DCBA
// ABC       CBA
// AB         BA
// A           A




#include<stdio.h>
int main()
{
int i,j;
char c;
for(i=1;i<=7;i++)
{
	c='A';
	for(j=1;j<=13;j++)
	{
		if(j<=8-i||j>=6+i)
		{
			if(j<=7)
			{
					printf("%c",c);
	            	c++;
			}
			else
			{
				if(i==1&&j>7)
				{--c;
					printf("%c",c-1);
				continue;	
				}
			
				--c;
				printf("%c",c);
	           
				
			}
			
		
		}

		else
		
		printf(" ");
	}
	printf("\n");
}
	return 0;
}
