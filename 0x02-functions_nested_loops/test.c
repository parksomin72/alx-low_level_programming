#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main()
{
	time_t now;
	struct tm *tm_info;

	while (1)
	{
		time(&now);
		tm_info = localtime(&now);

		printf("Current time: %02d:%02d\n", tm_info->tm_hour, tm_info->tm_min);
	}
	return (0);
}
