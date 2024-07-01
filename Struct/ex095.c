#include <stdio.h>

struct syohin_data {　　//構造体タグ名
	char name[20]; //メンバリスト
	int tanka;　　//メンバリスト
};
void display1(int a);　　　　　　　　　　　　//プロトタイプ宣言
void display2(struct syohin_data syohin);　　//プロトタイプ宣言

main()
{
	int a = 10;
	struct syohin_data/*intと同じ*/syohin/*変数名。ex)a*/ = {"ケシゴム",50};
	display1(a);
	display2(syohin);
}

void display1(int a)
{
	printf("a=%d\n",a);
}

void display2(struct syohin_data syohin)
{
	printf("syohin.name=%s syohin.tanka=%d\n",syohin.name,syohin.tanka);
}