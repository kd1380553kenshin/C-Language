#include <stdio.h>
int gokei(int a, int b,int c);
float heikin(int cnt);

main()
{
	int a, b,c;

	printf("1�ڂ̐�������");
	scanf("%d",&a);
	printf("2�ڂ̐�������");
	scanf("%d",&b);
	printf("3�ڂ̐�������");
	scanf("%d",&c);
	
	printf("���v��%d�ł��@",gokei(a,b,c));
	printf("���ς�%.2f�ł�",heikin(a,b,c));
}

int gokei(int a, int b, int c)
{
	return a+b+c;
}

float heikin(int a,int b,int c)
{
	return (float)gokei(a, b, c) / 3;
}

