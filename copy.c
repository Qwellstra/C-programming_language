#include <stdio.h>
/**
 * main - a function to copy files
 * @c: file being copied 
 *
 * Return: copied file
 */
int main()
{
	int c;

	c = getchar();
	while (c != EOF)
	{
		putchar(c);
		c = getchar();
	}
}
