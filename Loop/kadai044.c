#include <stdio.h>
main()
{
	int ia;
	printf("����(-999�œ��͏I��)�H");
	scanf("%d",&ia);
	while (ia != -999)
	{
		printf("8�i����%o  16�i����%X\n",ia,ia);
		printf("����(-999�œ��͏I��)�H");
		scanf("%d",&ia);
	}
}