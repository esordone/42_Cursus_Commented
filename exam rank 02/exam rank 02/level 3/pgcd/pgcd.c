#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.*/

//maximo comun divisor es el numero mes gran que divideix els dos nums

int main (int argc, char **argv)
{
	int num1;
	int num2;
	int tmp;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		if (num1 <= 0 || num2 <= 0)
		{
			printf("\n");
			return(0);
		}
		while (num2 != 0)
		{
			tmp = num2;
			//printf("str2 = %d\n", num2);
			num2 = num1 % num2;
			//printf("str2 post operatori = %d\n", num2);
			//printf("abans de la volta str1 = %d\n", num1);
			num1 = tmp;
			//printf("despres de la volta str1 = %d\n", num1);
		}
		printf("%d\n", num1);
	}
	if (argc != 3)
		write(1, "\n", 1);
	return (0);
}

/*int main(int argc, char const *argv[])
{
	int string1 = atoi(argv[1]);
	int string2 = atoi(argv[2]);

	if (argc != 3)
	{
		printf("\n");
		return 0;
	}
	if (string1 <= 0 || string2 <= 0)
	{
		printf("\n");
		return 0;
	}
	while (string2 != 0)
	{
		int temporary = string2;
		//printf("str2 = %d\n", string2);
		string2 = string1 % string2;
		//printf("str2 post operatori = %d\n", string2);
		//printf("abans de la volta str1 = %d\n", string1);
		string1 = temporary;
		//printf("despres de la volta str1 = %d\n", string1);
	}
	printf("%d\n", string1);
	return 0;
}*/
