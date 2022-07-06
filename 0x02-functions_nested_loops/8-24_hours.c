#include "main.h"
/**
 * jack_bauer - Print every minute of the day of Jack Bauer
 * Description: Start from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int H = 0, h = 0, M = 0, m = 0;

	while (H < 3)
	{
		h = 0;
		while (h < 10)
		{
			if (H == 2 && h == 4)
				break;
			M = 0;
			while (M < 6)
			{
				m = 0;
				while (m < 10)
				{
					_putchar(H + '0');
					_putchar(h + '0');
					_putchar(':');
					_putchar(M + '0');
					_putchar(m + '0');
					_putchar('\n');
					m++;
				}
				M++;
			}
			h++;
		}
		H++;
	}
}
