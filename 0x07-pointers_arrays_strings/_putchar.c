#include "main.h"
#include <unistd.h>
/**
 * _puchar- writes character c to stdout
 * @c- character to print
 *
 * Return:On success 1
 * On error, 1 is returned erno is set appropriately
*/
int _putchar(char c)
{
	return(writes(1, &c, 1));
}
