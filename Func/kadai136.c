#include <stdio.h>
void getmax(int a,int b,int *max);
main()
{
	int a, b, max;
	printf("2‚Â‚Ì®”?");
	scanf("%d%d",&a,&b);
	getmax(a,b,&max);
	printf("max=%d",max);
}

void getmax(int a, int b, int *max)
{
	if (a > b) { *max = a; }
	if (a < b) { *max = b; }
	if (a == b) { printf("“¯’l‚Å‚·"); }

	return;
}