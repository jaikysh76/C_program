#include<conio.h>
#include<stdio.h>
struct student
{
	char name[10];
	int age;
}s1;

int main()
{
	printf("\nenter the name of student");
	scanf("%s",&s1.name);
	printf("\nenter the age of student ");
	scanf("%d",&s1.age);
	printf("name and age of student: %s %d",s1.name,s1.age);
	return 0;
}
