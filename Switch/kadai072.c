#include <stdio.h>
main()
{
	char moji;
	printf("アルファベット?");
	scanf("%c",&moji);

	switch (moji)
	{
		case 'a':
			//printf("America\nAustralia"); break;
		case 'A':
			printf("America\nAustralia"); break;
		case 'e':
			printf("England"); break;
		case 'E':
			printf("England"); break;
		case 'f':
			printf("France"); break;
		case 'F':
			printf("France"); break;
		case 'j':
			printf("Japan"); break;
		case 'J':
			printf("Japan"); break;
		default:
			printf("IDK");
	}
}