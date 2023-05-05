#include "main.h"
/**
* clear_bit - set value of a given bit to 0
* @n: pointer to number to changes
* @index: index of the bit to clear
*
* Return: 1 for success, -1 for faile
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
