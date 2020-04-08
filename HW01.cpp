/*
ùÊüåŞÅéÄ C ùŞãÒ scanf âÃìıãòãÓĞà printf âÃõóãòãÓ
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	char a;
	scanf("%c", &a);
	printf("%8c\n", a);
	printf("%7c%c%c\n", a,a,a);
	printf("%4c%c%c%c%c%c%c%c%c\n", a,a,a,a,a,a,a,a,a);
	printf("%6c%c%c%c%c\n", a, a, a, a, a);
	printf("%4c%c%c%c%c%c%c%c%c\n", a,a,a,a,a,a,a,a,a);
	printf("%2c%c%c%c%c%c%c%c%c%c%c%c%c\n", a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("%6c%c%c%c%c\n", a, a, a, a, a);
	printf("%6c%c%c%c%c\n", a, a, a, a, a);

	system("pause");
	return 0;
}


