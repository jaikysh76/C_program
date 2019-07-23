#include<stdio.h>
#include<conio.h>
int change(int*,int*);
int main()
{
	int a=10,b=15;
	change(&a,&b);
	printf("the value is: %d",a);
	printf("\n");
	printf("the value is %d",b);
	return 0;
}
int change(int*x,int*y)
{
	*x=30;
	*y=20;
}
