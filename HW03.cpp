/*
	Learning how to output in C format and use if to decide true/false logically. 
*/
#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable : 4996)



int main()
{
	int a, b;
	printf("Enter the value of monthly salary : ");
	scanf("%d", &a);

	if (a <= 30000) {
		b = (a*1.5) + (a * 12);
		printf("\nYour annual salary is $%d\n", b);
	}

	else if (a >= 30001 && a <= 50000) {
		b = (a * 2) + (a * 12);
		printf("\nYour annual salary is $%d\n", b);
	}

	else if (a >= 50001 && a <= 70000) {
		b = (a*2.5) + (a * 12);
		printf("\nYour annual salary is $%d\n", b);
	}

	else if (70001 < a) {
		b = (a * 4) + (a * 12);
		printf("\nYour annual salary is $%d\n", b);
	}
	else;
	system("pause");
	return 0;

}
