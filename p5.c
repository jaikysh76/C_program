#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n=4,k;
	for(i=4;i>=0;i--)
	{
	  for(j=0;j<n-i;j++)
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
	
