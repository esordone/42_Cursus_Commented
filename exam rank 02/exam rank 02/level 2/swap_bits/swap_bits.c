#include <stdio.h>

unsigned char swap_bits(unsigned char octet);

int main(void)
{
	char letter_t;
	char letter_G;
	letter_t = 't';
	letter_G = 'G';

	printf("letter_t after swap: %c", swap_bits(letter_t));
	printf("\n");
	printf("letter_G after swap: %c", swap_bits(letter_G));
	printf("\n");
	return (0);
}

unsigned char	swap_bits(unsigned char c)
{
	return ((c >> 4) | (c << 4));
	//>> desplaza a la derecha
	//<< desplaza a la izquierda
}

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char	result;
	unsigned char	new_left_4_bits;
	unsigned char	new_right_4_bits;

	new_left_4_bits = octet >> 4;
	new_right_4_bits = octet << 4;
	result = new_left_4_bits | new_right_4_bits;
	return (result);
}
