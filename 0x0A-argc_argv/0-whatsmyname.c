#include <unistd.h>

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
