#include "main.h"
#include <unstd.h>
/**
 *_putchar- writes a character to stdout
 *@c: is character to print
 * Return:Success 1
 *
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
