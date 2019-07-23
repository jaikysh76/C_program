#include<conio.h>
#include<stdio.h>
int main()
{
	int i,n=5,j,k;
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
	for(i=0;i<n;i++)
	{
		for(j=0;j<i-1;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
   
	return 0;
}
