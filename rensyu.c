//#include <stdio.h>
//main()
//{
//	char moji[100];
//	int cnt = 0;
//
//	printf("文字列を入力：");
//	scanf("%s",&moji[0]);
//	while (moji[cnt] != '\0') {
//		cnt++;
//	}
//	printf("文字列：%s\n",&moji[0]);
//	printf("文字数は%d文字\n",cnt);
//}
#include<stdio.h>
void kansu(int num, int i, char* asuta);
main()
{
	int num,i;
	printf("整数?:");
	scanf("%d",&num);
	printf("\n");
	kansu(num,i,&asuta);
	printf("%c",asuta);
}

void kansu(int num, int i, char* asuta)
{
	for (i = 0; i == num; i++) {
		printf("*");
	}
	asuta=
}
