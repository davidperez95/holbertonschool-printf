#include "main.h"

/**
 * main - tests
 *
 * Return: void
 */
int main(void)
{
	/*int len;
	int len2;
	unsigned int ui;
	void *addr;
	*/
	_printf("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");

	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');

	return (0);
}
