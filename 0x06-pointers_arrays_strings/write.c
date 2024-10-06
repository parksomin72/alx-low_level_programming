#include <unistd.h>

int main()
{
	char a = '1';
	int b = 49;

	b = b + 48;

	write(1, &a, 1);
	write(1, "\n", 1);
	write(1, &b, 1);
        write(1, "\n", 1);
}
