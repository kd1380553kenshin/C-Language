#include <stdio.h>
void gokei(int a, int b, int* sum, float *avg);
main()
{
	int a,b,sum;
	float avg;
	printf("������2���́F");
	scanf("%d%d",&a,&b);
	gokei(a,b,&sum,&avg);
	printf("���v��%d�A���ς�%.2f",sum,avg);
}

void gokei(int a, int b, int* sum, float *avg)
{
	*sum = a + b;
	*avg = (float)*sum / 2;
}