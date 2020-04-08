/*
Learning how to use scanf and printf to input or output number. 
*/
#include<stdio.h>
#include<stdlib.h>

int main() {
	int a, b, c, d, e;

	printf("Num1 :");
	scanf("%d", &a);
	printf("\nNum2 :");
	scanf("%d", &b);
	printf("\nNum3 :");
	scanf("%d", &c);
	printf("\nNum4 :");
	scanf("%d", &d);

	e = a + b - c * d;
	printf("\n%d+%d-%d*%d=%d", a, b, c, d, e);
	e = a + b * c - d;
	printf("\n%d+%d*%d-%d=%d", a, b, c, d, e);
	e = a - b + c * d;
	printf("\n%d-%d+%d*%d=%d", a, b, c, d, e);
	e = a - b * c + d;
	printf("\n%d-%d*%d+%d=%d", a, b, c, d, e);
	e = a * b + c - d;
	printf("\n%d*%d+%d-%d=%d", a, b, c, d, e);
	e = a * b - c + d;
	printf("\n%d*%d-%d+%d=%d\n", a, b, c, d, e);


	system("pause");
	return 0;
}
