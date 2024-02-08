#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always Success 0
 */
int main(void)
{
char alphabet_lowercase = 'a';
char alphabet_uppercase = 'A';

while (alphabet_lowercase <= 'z')
{
putchar(alphabet_lowercase);
alphabet_lowercase++;
}
while (alphabet_uppercase <= 'Z')
{
putchar(alphabet_uppercase);
alphabet_uppercase++;
}
putchar('\n');
return (0);
}
