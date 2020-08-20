#include<stdio.h>
int a[3] = {0,2,0};
void calculate();
int main() {
	printf("Enter number :   ");
	scanf_s("%d",&a[0]);
	printf("Factoring Result : ");
	calculate();
	printf(" x %d",a[1]);
	return 0;
}
void calculate() {
	while ((a[0] / a[1]) != 1) {
		if ((a[0] % a[1]) == 0) {
			if (a[2] > 0) {
				printf(" x ");

			}
			else {}
			a[2] = a[2] + 1;

			printf("%d", a[1]);
			a[0] = a[0] / a[1];
		}
		else if ((a[0] % a[1]) != 0) {
			a[1] = a[1] + 1;
		}
		else {}
	}

}