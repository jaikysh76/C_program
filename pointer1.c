#include<stdio.h>
int main()
{
  int a=10;
  int *ptr,**pptr;
  ptr=&a;
  pptr=&ptr;
  printf("the value of a:%d",a);
  printf("\n");
  printf("the value of *ptr:%d",*ptr);
  printf("\n");
  printf("the value of **pptr:%d",**pptr);
  return 0;	
}

