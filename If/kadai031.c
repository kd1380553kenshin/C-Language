#include <stdio.h>
main()
{
	float ia, ib;
	printf("2つの実数値？");
	scanf("%f%f",&ia,&ib);
	if (ia > ib)
	{
		printf("大きいほうは：%f\n",ia);
	}
	else
	{
		if (ia < ib)
		{
			printf("大きいほうは：%f\n",ib);
		}
		else
		{
			printf("同値です");
		}
	}
}