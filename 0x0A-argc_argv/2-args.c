#include "main.h"

/**
 * main - prints alll arguments a program recieves
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
