#include <stdio.h>
main()
{
	int ia;
	printf("整数を入力：");
	scanf("%d",&ia);
	ia = ia / 10;
	switch (ia)
	{
		case 1:
			printf("10点代です\n"); break;
		case 2:
			printf("20点代です\n"); break;
		case 3:
			printf("30点代です\n"); break;
		case 4:
			printf("40点代です\n"); break;
		default:
			printf("エラー表示\n");
	}
}