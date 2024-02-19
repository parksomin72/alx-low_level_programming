#include <stdio.h>

int sumMultiplesOf3Or5(int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
	{
            sum += i;
        }
    }
    return (sum);
}

int main()
{
    int n = 1024;
    int result = sumMultiplesOf3Or5(n);
    printf("%d\n", result);
    return (0);
}
