#include <stdio.h>
main()
{
	int num, gokei;
	float ia;
	gokei = 0;
	ia = 0;
	printf("����(-999�ŏI��)�H");
	scanf("%d",&num);
	while (num != -999)
	{
		gokei += num;
		ia++;
		printf("����(-999�ŏI��)�H");
		scanf("%d",&num);
	}
	printf("���v��%d\n",gokei);
	printf("���ρ�%.2f\n",gokei/ia);
}