#include <stdio.h>
main()
{
	int num1, num2;
	char moji;

	printf("®”1?");
	scanf("%d",&num1);
	printf("®”2?");
	scanf("%d",&num2);
	printf("‰‰Zq?(+,-,*,/,%)");
	scanf("\n%c",&moji);

	switch (moji)
	{
		case '+':
			printf("%d + %d = %d", num1, num2, num1 + num2); break;
		case '-':
			printf("%d - %d = %d", num1, num2, num1 - num2); break;
		case '*':
			printf("%d * %d = %d", num1, num2, num1 * num2); break;
		case '/':
			printf("%d / %d = %d", num1, num2, num1 / num2); break;
		case '%':
			printf("%d “ %d = %d", num1, num2, num1 % num2); break;
	}
}