#include<stdio.h>
long int a[3] = { 0,0,0};
int main()
{
	printf("Enter first number : ");
	scanf_s("%ld",&a[0]);
	printf("Enter second number : ");
	scanf_s("%ld",&a[1]);
	a[2] = a[1];
		while (a[0]%a[2]!=0 || a[1]%a[2]!=0)
		{
			a[2] = a[2] - 1;
		}
		printf("Greatest common divisor = %ld",a[2]);
		
	
}