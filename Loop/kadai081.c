#include <stdio.h>
main()
{
	int num, cnt,sum;

	for (cnt = 0, sum = 0;;cnt++)
	{
		printf("����(-999�ŏI��)?");
		scanf("%d", &num);
		if (num == -999)break;
		sum += num;
	}
	printf("���v��%d\n",sum);
	printf("���ρ�%.3f", (float)sum / cnt);

}
