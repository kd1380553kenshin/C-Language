#include <stdio.h>
#include<string.h>
struct kamoku_data {
	char name[30];
	char subject[20];
	int tani;
};

main()
{
	struct kamoku_data kamoku;
	struct kamoku * p;
	p = &kamoku_data;
	strcpy(kamoku->name, "ゲームソフトIコース");
	strcpy(kamoku->subject, "C言語");
	kamoku->tani = 8;

	printf("コース名：%s\n", kamoku->name);
	printf("教科名：%s\n", kamoku->subject);
	printf("単位数：%d\n", kamoku->tani);
}