/* https://github.com/sohitfirs/2.4.git */

#include <stdio.h>
#include <cstdlib>

main()
{
	int day;
	printf("Day? ");
	scanf("%i", &day);
	
	switch(day)
	{
		case 1:
			{
				printf("Mon\n");
			}
			break;
		case 2:
			{
				printf("Tue\n");
			}
			break;
		case 3:
			{
				printf("Wed\n");
			}
			break;
		case 4:
			{
				printf("Thu\n");
			}
			break;
		case 5:
			{
				printf("Fri\n");
			}
			break;
		case 6:
			{
				printf("Sat\n");
			}
			break;
		case 7:
			{
				printf("Sun\n");
			}
			break;
		default:
			{
				printf("ERROR\n");
			}
	}
	system ("pause");
}
