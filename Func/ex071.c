#include <stdio.h>
int gokei(int a, int b,int c);
float heikin(int cnt);

main()
{
	int a, b,c;

	printf("1つ目の整数入力");
	scanf("%d",&a);
	printf("2つ目の整数入力");
	scanf("%d",&b);
	printf("3つ目の整数入力");
	scanf("%d",&c);
	
	printf("合計は%dです　",gokei(a,b,c));
	printf("平均は%.2fです",heikin(a,b,c));
}

int gokei(int a, int b, int c)
{
	return a+b+c;
}

float heikin(int a,int b,int c)
{
	return (float)gokei(a, b, c) / 3;
}

