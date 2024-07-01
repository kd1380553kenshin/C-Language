//ポインタを使ってプログラムを作成

#include <stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
	int kosuu;
};

main()
{
	struct syohin_data syohin[] = { {"エンピツ",30,5,},
								  {"消しゴム",50,2,},
								  {"ふでばこ",500,3,} };
	struct syohin_data* p;
	p = syohin; //配列名は先頭アドレス


	int i,kingaku;
	for (i = 0; i < 3; i++)
	{
		kingaku = p->tanka * p->kosuu;
		printf("商品名:%s ",p->name);
		printf("単価:%4d ",p->tanka);
		printf("個数:%4d ",p->kosuu);
		printf("金額:%d ",kingaku);
		p++;               //次のデータへ進める
		printf("\n");
	}

}