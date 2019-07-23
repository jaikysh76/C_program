#include<stdio.h>
struct student
{
	int age;
	char name[10];
	
}s1;
int main()
{
	printf("Enter the student name");
	scanf("%s",s1.name);
	printf("\n");
	printf("Enter the student age");
	scanf("%d",&s1.age);
	printf("\n");
	printf("Student Name And Student age \n%s\t%d",s1.name,s1.age);
	return 0;
}
