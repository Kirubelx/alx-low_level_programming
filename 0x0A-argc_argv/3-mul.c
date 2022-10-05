#include "main.h"

/**
 * main - program multilies two numbers
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int index, multip;

	multip = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (index = 1; index < argc; index++)
	{
		multip = multip * atoi(argv[index]);
	}
	printf("%d\n", multip);
	return (0);
}
