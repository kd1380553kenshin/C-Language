#include <stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int i,sum1=0,sum2=0,cnt1=0,cnt2=0;

	printf("�z��a=");
	for (i = 0; i < 10; i++)
	{
		printf("%5d",a[i]);
		sum1 += a[i];
		cnt1++;
	}
	printf("\n���v=%d\n",sum1);
	printf("����=%d\n",sum1/cnt1);


	printf("�z��b=");
	for (i = 0; i < 10; i++)
	{
		printf("%5d", b[i]);
		sum2 += b[i];
		cnt2++;
	}
	printf("\n���v=%d\n", sum2);
	printf("����=%d\n", sum2 / cnt2);
}