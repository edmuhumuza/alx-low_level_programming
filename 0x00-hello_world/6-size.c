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
	printf("Size of char: %zu byte\n", sizeof(charType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of long: %zu bytes\n", sizeof(longType));
	printf("Size of long long: %zu bytes\n", sizeof(longlongType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));


	return (0);

}

