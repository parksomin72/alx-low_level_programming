#include <stdio.h>
/**
 * main - Putchar prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letters = 'a';
while (letters < 'z')
{
if (letters != 'e' && letters != 'q')
{
putchar(letters);
}
letters++;
}
putchar('\n');
return (0);
}
