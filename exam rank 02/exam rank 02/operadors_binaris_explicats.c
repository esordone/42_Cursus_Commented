/*
	OPERADORES LOGICOS
	&& -> AND
	|| --> OR
*/


/*
	OPERADORES BOIINARIOS
	& -> AND binario
	| -> OR binario
	<< Desplaxamiento izq    (un desplazamiento a la izq divide por 2)       PEro cuidado, que depende cuanto desplazemos nos quedamos todo 0000000000
	>> Desplazamiento der	 (un desplazamiento a la izq multiplica por 2)
	~ Negaciomn
*/


void construct_binary(int i)
{
	static char c = '\0';
	static int i = 0;

	// //caracter nulo en binaro es
	// //00000000


	if(c & (128 >> i)) == 0
	{
		i++;
	}
	else
	{
		c = c | (128 >> i);
		i++
	}

	if (i == 8)
	{
		//CARACTER COMPLETAMENTE CONSTRUIDO
		print("%c", c);
		i = 0;
		c ='\0';
	}
}






	// //caracter nulo en binaro es
	// //00000000
	// if (value == 0)
	// 	return;
	// if (value == 1)
	// 	c = c | 128 >> i


	// //Ponme en columna 4 un 1
	// //00000000
	// //00001000   >> 4
	// //________
    // //00001000


    // //Ponme en columna 2 un 1
    // //00001000
    // //00100000 >> 2
    // //___________
    // //00101000



void print_binary(char c)
{
	//Para leer los bits necesito una mascara
	//las mascaras que queremos son todo 0 i un 1
	//00000001   -> 1
	//01000000  -> 128


	//11100001     //AND BINARRIO  y = c & x
	//10000000
	//__________
	//10000000

	int i;
	i = 0;
	while(i < 8)
	{
		if(c & (128 >> i)) == 0
		{
			printf("El bit %d en la primera columan es 0", i);
		}
		else
		{
			printf("El bit %d en la primera columan es 1", i);
		}
		i++;
	}
}


int main()
{

	char c = 'a';
	//01100001     //AND BINARRIO  y = c & x
	//11000100
	//________
	//01000000		

	//01100001     //OR BINARRIO  y = c | x
	//11000100
	//________
	//11100101

	//01100001     // << 2			
	//10000100 

	//01100001     // >> 2			
	//00011000

	//10000001     y = ~c
	//01111110

	print_binary(c);
	construct_binary(1)
	construct_binary(0)
	construct_binary(1)
	construct_binary(1)
	construct_binary(0)
	construct_binary(1)
	construct_binary(1)
	construct_binary(1)


}
