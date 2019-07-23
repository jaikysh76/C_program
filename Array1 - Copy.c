#include<stdio.h>
int main()
{
	int NumArr[4];
	int i,sum=0;
	for(i=1;i<4;i++)
	{
		printf("%d",&NumArr[i]);
	}
	for(i=1;i<4;i++)
	
	sum=sum+NumArr[i];
	printf("\nthe result :- \t%d",sum);
	return 0;
}
