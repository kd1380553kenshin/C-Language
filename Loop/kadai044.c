#include <stdio.h>
main()
{
	int ia;
	printf("整数(-999で入力終了)？");
	scanf("%d",&ia);
	while (ia != -999)
	{
		printf("8進数＝%o  16進数＝%X\n",ia,ia);
		printf("整数(-999で入力終了)？");
		scanf("%d",&ia);
	}
}