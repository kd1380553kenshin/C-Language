#include <stdio.h>
long bekijyou(int a,int b);
main()
{
	int a, b;
	long kotae;
	printf("���l1:");
	scanf("%d",&a);
	printf("���l2:");
	scanf("%d",&b);
	kotae = bekijyou(a, b);
	printf("%d��%d���%ld\n",a,b,kotae);
}

long bekijyou(int a, int b)
{
	long kotae = 1;
	int i;
	for (i = 0; i < b; i++)
	{
		kotae *= a;
	}
	return(kotae);
}