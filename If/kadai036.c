#include <stdio.h>
main()
{
	int ia, ib; 
	printf("�����l�P�H");
	scanf("%d",&ia);
	printf("�����l�Q�H");
	scanf("%d",&ib);
	if (ia > ib)
	{
		printf("%d�̕���%d���%d�傫��",ia,ib,ia-ib);
	}
	else
	{
		if (ia < ib)
		{
			printf("%d�̕���%d���%d������",ia,ib,ib-ia);
		}
		else
		{
			if (ia == ib)
			{
				printf("%d��%d�͓�����",ia,ib);
			}
		}
	}
}