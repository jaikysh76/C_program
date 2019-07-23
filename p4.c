#include<conio.h>
#include<stdio.h>
int main()
{
	int i,j,n=4,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
