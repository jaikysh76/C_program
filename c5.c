#include<stdio.h>
int main()
{
	int n,m,i,flag=0;
	printf("enter the number");
	scanf("%d",&n);
	m=n/2;
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
		{
			printf("number is not prime");
			flag=1;
			break;
			
		}
	}
	if(flag==0)
	printf("number is prime");
	return 0;
	
}