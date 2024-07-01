#include<stdio.h>
main()
{
	char data[15] = "C Language";
	char data2[15];
	char* p_data, * p_data2;

	p_data = data;
	p_data2 = data2;

	printf("data[]=%s\n",p_data);
	printf("data2[]には何も入っていないので文字列コードをコピーする\n");
	
	while (*p_data2++ = *p_data++);
	//*p_dataが'\0'になるまでコピーを続け、'\0が来たら条件式が偽となってループ終了'

	p_data2 = data2;
	printf("data2[]=%s\n",p_data2);
	while (*p_data2) {
		putchar(*p_data2++);
	}
	printf("\n");
}