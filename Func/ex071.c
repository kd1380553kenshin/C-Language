#include <stdio.h>
int gokei(int a, int b,int c);
float heikin(int cnt);

main()
{
	int a, b,c;

	printf("1‚Â–Ú‚Ì®”“ü—Í");
	scanf("%d",&a);
	printf("2‚Â–Ú‚Ì®”“ü—Í");
	scanf("%d",&b);
	printf("3‚Â–Ú‚Ì®”“ü—Í");
	scanf("%d",&c);
	
	printf("‡Œv‚Í%d‚Å‚·@",gokei(a,b,c));
	printf("•½‹Ï‚Í%.2f‚Å‚·",heikin(a,b,c));
}

int gokei(int a, int b, int c)
{
	return a+b+c;
}

float heikin(int a,int b,int c)
{
	return (float)gokei(a, b, c) / 3;
}

