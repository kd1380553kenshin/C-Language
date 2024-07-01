#include <stdio.h>
main()
{
	int a[5] = "abcde";
	int i;
	
	for(i = 0;i != '\0'; i++) {
		putchar(a);
	}
}