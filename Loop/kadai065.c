#include <stdio.h>
main()
{
	int num, sum,cnt;
	//num = scanf
	sum = 0;
	cnt = 0;

	do
	{
		printf("����(-999�ŏI��)?");
		scanf("%d", &num);
		sum += num;
		cnt++;
	}
	while(num != -999);

	printf("���v = %d\n",sum);
	printf("���� = %f",(float)sum/cnt);
}