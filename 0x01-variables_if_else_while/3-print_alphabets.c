#include <stdio.h>
/**
 * main - Putchar prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main()
{
char alphabet = 'a';
char letters = 'A';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
while (letters <= 'Z')
{
putchar(letters);
letters++;
}
putchar('\n');
return (0);
}
