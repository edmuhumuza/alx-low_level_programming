#include <stdio.h>
/**
 * main - Entry point
 *
 * DEescription: 'the program's description'
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int intType;
	float floatType;
	char charType;
	long long longlongType;
	long longType;


	/*size of evaluates the size of a variable*/
	printf("Size of a char: %zu byte\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(longType));
	printf("Size of a long long int: %zu bytes\n", sizeof(longlongType));
	printf("Size of a float: %zu bytes\n", sizeof(floatType));


	return (0);

}

