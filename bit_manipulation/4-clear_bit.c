/**
 * clear_bit - set the value of a bit to 0.
 * @n: A pointer to the bit.
 * @index: the position of the bit.
 *
 * Return: 1 if success .
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
