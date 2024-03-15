#include <stdio.h>
int main(void)
{
	int a;

	for (a = 0; a <= 10; a++)
	{
		printf("%d ", a);
	}
	printf("\n");
	a = 0;
	while (a <= 10)
	{
		printf("%d ", a);
		a++;
	}
	printf("\n");
	return (0);
}
