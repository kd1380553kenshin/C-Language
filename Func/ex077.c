#include <stdio.h>
void maxmin(int a,int b,int c,int*max,int *min);
main()
{
	int a, b, c, max,min;
	printf("������3���́F");
	scanf("%d%d%d",&a,&b,&c);
	maxmin(a,b,c,&max,&min);
	printf("�ő�l��%d �ŏ��l��%d\n",max,min);
}

void maxmin(int a, int b, int c, int* max, int* min)
{
	if (a > b && b > c) { *max = a, *min = c; }
	if (a > c && c > b) { *max = a; *min = b; }
	if (b > a && a > c) { *max = b; *min = c; }
	if (b > c && c > a) { *max = b; *min = a; }
	if (c > a && a > b) { *max = c; *min = b; }
	if (c > b && b > a) { *max = c; *min = a; }
	//*max = (a > b) ? (a > c ? a : c) : (b>c?b:c);
	//*min = (a < b) ? (a < c ? a : c) : (b<c?b:c);
}