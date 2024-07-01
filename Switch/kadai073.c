#include <stdio.h>
main()
{
	int num;
	char moji;
	printf("10進数の整数? ");
	scanf("%d",&num);

	printf("アルファベット(o,x,d)? ");
	scanf("%*c%c",&moji);   //%*c で読み飛ばし!!!!!!	

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