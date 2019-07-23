#include<stdio.h>
#include<conio.h>
int main()
{
	int a=10;
	int *ptr,**pptr;
	ptr=&a;
	pptr=&ptr;
	printf("the value of a:%d",a);
	printf("\n");
	printf("the value of *ptr: %d",&a);
	printf("\n");
	printf("the value of **pptr: %d",&ptr);
	printf("\n");
	return 0;
	
}
