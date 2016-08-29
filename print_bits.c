
#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int oct;
	int	divv;

	divv = 128;
	oct = octet - '0';
	while (divv != 0)
	{
		if (divv <= oct)
		{
			write(1, "1", 1);
			oct = oct % divv;
		}
		else
		{
			write(1, "0", 1);
		}
		divv = divv / 2;
	}
}
