#include <stdio.h>
#include<conio.h>
int printFebonacci(int n)
{
    int n1=0,n2=1,n3;
    if(n>0)
	{
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d",n3);
        printFebonacci(n-1);
        
    }
}

int main()
{
    int n;
    printf("Enter the numbers");
    scanf("%d",&n);
    printf("Febonacci no: ");
    printf("%d%d",0,1);
    printFebonacci(n-2);

    return 0;
}

