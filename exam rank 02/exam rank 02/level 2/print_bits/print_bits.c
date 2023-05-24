#include <unistd.h>
#include <stdio.h>

void print_bits(unsigned char octet)
{
	int	i;
	char bit;

	i = 8;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		//bit = el que em donen per 2 i compare coincidencies amb el 1
		//despres el faig char i printege
		write(1, &bit, 1);
	}
}
/*
int main(void)
{
	print_bits(0);
	write(1, "\n", 1);
	print_bits(1);
	write(1, "\n", 1);
	print_bits(2);
	write(1, "\n", 1);
	print_bits(10);
	write(1, "\n", 1);
	print_bits(113);
	write(1, "\n", 1);
	print_bits(255);
	write(1, "\n", 1);
	return (0);
}*/
