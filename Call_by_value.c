#include<stdio.h>
#include<conio.h>
int change(int,int);
int main()
{
	int a=10,b=20;
	change(a,b); //calling a function by passing values of variables;
	printf("value of a:%d",a);
	printf("\n");
	printf("value of b:%d",b);
	return 0;
}
int change(int x,int y)
{
	x=11;
	y=12;
}
