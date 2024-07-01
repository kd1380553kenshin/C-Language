#include <stdio.h>
main()
{
	char moji, d[11];
	int i;
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(10•¶š‚Ü‚Å)");
	scanf("%s",&d[]);
	for (i = 0; d[i] != '\0'; i++)
	{
		d[i] += 1;
	}
	printf("ˆÃ†‰»•¶š—ñ‚Í%s‚Å‚·",d);
}


/*	d[i] = d[i] + 1;
	ex. hello
	h +1 e +1 l +1 l+1 o+1
*/
