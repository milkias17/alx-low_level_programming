#include "main.h"

/**
	* flip_bits - gives the number of bits needed to flip to get m from n
	* @n: first number
	* @m: second number
	* Description: gives the number of bits needed to flip to get m from n
	* Return: int
*/
unsigned int flip_bits(unsigned long int n, unsigned int long m)
{
	int i = 0;
	int flippedBits = 0;
	int nBit;
	int mBit;

	while ((n >> i) > 0 || (m >> i) > 0)
	{
		nBit = (n >> i) & 1;
		mBit = (m >> i) & 1;
		if (nBit != mBit)
			flippedBits++;
		i++;
	}

	return (flippedBits);
}
