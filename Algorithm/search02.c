#include <stdio.h>
main()
{
	int d[11] = {10,5,30,77,16,3,47,29,37,33};
	int i,s;

	printf("探索値を入力");
	scanf("%d",&s);

	for (d[10] = s, i = 0; s != d[i]; i++);
	if (i == 10)
	{
		printf("見つからなかった");
	}
	else
	{
		printf("探索値%dは%d番目にありました\n",s,i);
	}
}