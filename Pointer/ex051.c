#include <stdio.h>
main()
{
	int a = 50, b = 10;
	int* p_a = &a, * p_b = &b;
	int c = *p_a + *p_b; //c = a+b�Ɠ���
	printf("%d+%d=%d\n",*p_a,*p_b,c);
	printf("&a=%d &b=%d &c=%d\n",&a,&b,&c);
	printf("p_a=%d p_b=%d\n",p_a,p_b);
}