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
	strcpy(kamoku.name,"ゲームソフトIコース");
	strcpy(kamoku.subject,"C言語");
	kamoku.tani = 8;

	printf("コース名：%s\n",kamoku.name);
	printf("教科名：%s\n",kamoku.subject);
	printf("単位数：%d\n",kamoku.tani);
}
//
//struct kamoku_data {
//
//};
//main()
//{
//	struct kamoku_data kamoku;
//	//名前を入力するときはstrcpy!!
//	strcpy(kamoku.name,"ゲームソフト分野");
//	strcpy(kamoku.subject,"C言語");
//}