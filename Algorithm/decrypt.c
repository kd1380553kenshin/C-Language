#include <stdio.h>
main()
{
	char moji, d[11];
	int i;
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(10•¶š‚Ü‚Å)");
	scanf("%s", &d[0]);
	for (i = 0; d[i] != '\0'; i++)
	{
		d[i]--;
		i++;
	}
	printf("ˆÃ†‰»•¶š—ñ‚Í%s‚Å‚·", d);
}

