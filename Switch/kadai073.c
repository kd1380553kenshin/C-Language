#include <stdio.h>
main()
{
	int num;
	char moji;
	printf("10�i���̐���? ");
	scanf("%d",&num);

	printf("�A���t�@�x�b�g(o,x,d)? ");
	scanf("%*c%c",&moji);   //%*c �œǂݔ�΂�!!!!!!	

	switch (moji)
	{
		case 'o':
			printf("%o", num);
		case 'x':
			printf("%x", num);
		default:
			printf("%d", num);
	}
}