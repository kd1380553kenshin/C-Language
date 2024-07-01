#include <stdio.h>
main()
{
	int a = 100;
	int *p_a;

	*p_a = &a;


	printf("a = 100  &a = %d\n",&a);
	printf("p_a = %d  *p_a = 100  &p_a = %p",p_a,*p_a,&p_a);
}