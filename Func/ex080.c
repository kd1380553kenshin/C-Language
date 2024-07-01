#include <stdio.h>
#define TBL_END 5
int tbl_gokei(int *p);
main()
{
	int a[] = { 10,20,30,40,50 }, gokei;
	gokei = tbl_gokei(a);
	printf("gokei = %d\n",gokei);
}

int tbl_gokei(int* p)
{
	int i,gokei = 0;
	for (i = 0; i < TBL_END; i++)
	{
		gokei += *(p+i);
	}
	return (gokei);
}