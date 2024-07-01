#include <stdio.h>
void kansu(int num, char moji);
main()
{
	int num;
	char moji;
	printf("•¶š?F");
	scanf("%c",&moji);
	printf("®”?F");
	scanf("%d",&num);

	kansu(moji, num);
}

void kansu(char moji, int num)
{
	printf("%c\n%d\n",moji,num);
	int i;
	for (i = 0; i < num; i++)
	{
		printf("%d",moji);
	}
}