#include <stdio.h>
main()
{
	int num, i;
	printfx3("�������āF");
	scanf("%d",&num);
	i = 0;
	while (i <= 10)
	{
		printf("%d+%d=%d\n",num,i,num+i);
		i++;
	}
}