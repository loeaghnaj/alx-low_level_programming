#include "main.h"
/**
 * is_prime_number - retrun 1 if prime
 * @n: int
 * @p: prime
 *
 * Return: 1 or 0
 */
int primeloop(int n, int p);
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 0 || n == 1)
		return (0);
	return (primeloop(n, 2));
}
/**
 * primeloop - check for prime
 * @n: int
 * @p: prime numbers
 *
 * Return: 1 if prime
 */
int primeloop(int n, int p)
{
	if (n % p == 0)
	{
		if (n == p)
			return (1);
		else
			return (0);
	}
	return (primeloop(n, p + 1));
}
