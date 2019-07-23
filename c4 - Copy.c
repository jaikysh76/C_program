#include<stdio.h>
int PrintFebonacci(int n) //function to calculate the febonacci
{
	static int n1=0,n2=1,n3;
	if(n>0)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d",n3);
		PrintFebonacci(n-1); //calling the fuction recursibly
	}
}
int main()
{
	int n;
	printf("enter the elements: ");
	scanf("%d",&n);
	printf("Febonacci series: ");
	printf("%d%d",0,1);
	PrintFebonacci(n-2); //calling n-2 because two number are already printed
	return 0;
	
}
