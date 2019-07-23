#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n=5,j,l,k,t=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			printf("*");
			for(l=0;l<n-i-j;l++)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
