#include <stdio.h>
void swap(int* a, int* b);

main()
{
	int a, b;
	printf("������2���́F");
	scanf("%d%d",&a,&b);
	printf("�֐����s�O�̒l�F\na=%d  b=%d\n",a,b);
	swap(&a,&b);
	printf("�֐����s��̒l�F\na=%d  b=%d\n",a,b);
}

void swap(int* a, int* b)
{
	int w;
	w = *a;
	*a = *b;
	*b = w;
}