#include <stdio.h>
main()
{
	char ia;
	printf("���Z�q�����āF");
	scanf("%c",&ia);
	switch (ia)
	{
		case '+':
			printf("���Z�ł�\n"); break;

		case '-':
			printf("���Z�ł�\n"); break;

		case '*':
			printf("��Z�ł�\n"); break;

		case '/':
			printf("���Z�ł�\n"); break;

		case '%':
			printf("���܂�ł�\n"); break;

		default :
			printf("���̑��ł�\n");
	}
}