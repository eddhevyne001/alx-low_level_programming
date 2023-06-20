#include "main.h"

#include <unistd.h>

/**

 * _putchar - character c to stdout

 * @c: print

 *

 * Return: success 1
 * On error, -1 is returned, error is corrected
 */
int _putchar(char c)
{
	return(write(1, &c,1));
}
