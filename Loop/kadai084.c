#include <stdio.h>
main()
{
	int num1,num2;
	
	while (1)
	{
		printf("整数1(-999で入力終了)?");
		scanf("%d",&num1);
		if (num1 == -999)break;
		if (num1 == 0)continue;
	
		printf("整数2(-999で入力終了)?");
		scanf("%d",&num2);
		if (num2 == -999)break;
		if (num2 == 0)continue;

		printf("\n%d / %d = %d あまり　%d",num1,num2,num1/num2,num1%num2);
		printf("\n");
	}
}