#include <stdio.h>

int main()
{
	FILE* fptr;

	fptr = fopen("text.txt", "r");

	char buffer[1000];

	if (fptr != NULL)
	{
	//	printf("File open successful\n");
		fgets(buffer, 1000, fptr);
		printf("%s\n", buffer);
	}
	else
		printf("File open unsuccessful\n");

return (0);
}
