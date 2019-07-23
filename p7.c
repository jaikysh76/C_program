#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n=5,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			printf(" ");
	
		}
		for(k=1;k<=i*2-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
