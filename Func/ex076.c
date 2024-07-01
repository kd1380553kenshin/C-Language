#include <stdio.h>
void gokei(int a, int b, int* sum, float *avg);
main()
{
	int a,b,sum;
	float avg;
	printf("®”‚ğ2‚Â“ü—ÍF");
	scanf("%d%d",&a,&b);
	gokei(a,b,&sum,&avg);
	printf("‡Œv‚Í%dA•½‹Ï‚Í%.2f",sum,avg);
}

void gokei(int a, int b, int* sum, float *avg)
{
	*sum = a + b;
	*avg = (float)*sum / 2;
}