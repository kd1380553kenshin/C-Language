#include <stdio.h>
main()
{
	int i,k,c[10];

	for (i = 0; i < 10; i++)
	{
		printf("����(-999�œ��͏I��)?");
		scanf("%d", &c[i]);

		if (c[i] == -999)break;
	}

	printf("\n�z��c=");

	for (k = 0; k < i; k++)
	{
		printf("%d ",c[k]);
	}
}