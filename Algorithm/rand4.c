#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int num;
	srand(time(0));
	rand();
	num = rand() % 5 + 1;
	if (num == 1)
	{
		printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚Í™ ‚Å‚·");
	}
	else
	{
		if (num == 2)
		{
			printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚Í™™ ‚Å‚·");
		}
		else
		{
			if (num == 3)
			{
				printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚Í™™™ ‚Å‚·");
			}
			else
			{
				if (num == 4)
				{
					printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚Í™™™™ ‚Å‚·");
				}
				else
				{
					if (num == 5)
					{
						printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚Í™™™™™ ‚Å‚·");
					}
				}
			}
		}
	}
}
