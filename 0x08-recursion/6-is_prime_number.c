#include "main.h"

int check_num(int n, int i)
{
	if (i * i > n)
		return (1);
	else if (n % i == 0)
		return (0);
	return(check_num(n, i + 2));
}

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	else if (n % 2 == 0)
		return (0);
	return(check_num(n, 3));
}
