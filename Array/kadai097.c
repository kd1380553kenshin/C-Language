#include <stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int c[10];
	int i, k;

	printf("”z—ña=");
	for (i = 0; i < 10; i++)
	{
		printf("%4d",a[i]);
	}

	printf("\n”z—ñc=");
	for (k = 0,i--; i >= 0; k++, i--)
	{
		c[k] = a[i];
		printf("%4d",c[k]);
	}
}