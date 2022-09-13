#include <unistd.h>
#include "main.h"
/**
 * main - The entry point of C programs
 * @void: The function takes no parameters
 *
 * Description: This program does a lot of things
 * Return: 0
 */
int main(void)
{
	char word[8] = "_putchar";
	int letter_index = 0;

	while (letter_index < 8)
	{
		_putchar(word[letter_index]);
		letter_index++;
	}
	_putchar('\n');
	return (0);
}
