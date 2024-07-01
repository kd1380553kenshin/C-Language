#include <stdio.h>
main()
{
	int ia, ib; 
	printf("®”’l‚PH");
	scanf("%d",&ia);
	printf("®”’l‚QH");
	scanf("%d",&ib);
	if (ia > ib)
	{
		printf("%d‚Ì•û‚ª%d‚æ‚è%d‘å‚«‚¢",ia,ib,ia-ib);
	}
	else
	{
		if (ia < ib)
		{
			printf("%d‚Ì•û‚ª%d‚æ‚è%d¬‚³‚¢",ia,ib,ib-ia);
		}
		else
		{
			if (ia == ib)
			{
				printf("%d‚Æ%d‚Í“™‚µ‚¢",ia,ib);
			}
		}
	}
}