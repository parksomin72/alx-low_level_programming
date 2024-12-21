#include <unistd.h>
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	if (argc > 0)
	{
		char *arg = argv[0];

		while (*arg)
		{
			write(1, arg, 1);
			arg++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
