#include <stdio.h>
main()
{
	int ia, ib; 
	printf("整数値１？");
	scanf("%d",&ia);
	printf("整数値２？");
	scanf("%d",&ib);
	if (ia > ib)
	{
		printf("%dの方が%dより%d大きい",ia,ib,ia-ib);
	}
	else
	{
		if (ia < ib)
		{
			printf("%dの方が%dより%d小さい",ia,ib,ib-ia);
		}
		else
		{
			if (ia == ib)
			{
				printf("%dと%dは等しい",ia,ib);
			}
		}
	}
}