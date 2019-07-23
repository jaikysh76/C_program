#include<stdio.h>
#include<conio.h>
union data
{
	int a;
	float b;
	char ch;
};
int main()
{
	union data d;
    d.a=3;
	d.b=3.5;
	d.ch='a';
	printf("\nvalue of a is %d", d.a);
	printf("\n value of b is %f",d.b);
	printf("\n value of c is %c",d.ch);
	return 0;
}
