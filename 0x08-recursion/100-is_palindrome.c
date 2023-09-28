#include "main.h"
/**
 * is_palindrome - check if string is palindrome
 * @s: string
 * @i: index
 *
 * Return: int
 */
int length(char *s, int i);
int check(char *s, int index, int l);
int is_palindrome(char *s)
{
	return (check(s, 0, length(s, 0)));
}
/**
 * length - lenght
 * @s: string
 * @i: int
 * Return: 1
 */
int length(char *s, int i)
{
	if (*(s + i) == '\0')
		return (0);
	return (1 + length(s, i + 1));
}
/**
 * check - check for char
 * @s: string
 * @index: i
 * @l: lenght
 * Return: int
 */
int check(char *s, int index, int l)
{
	if (index == l / 2)
		return (1);
	if (*(s + index) != *(s + (l - 1 - index)))
		return (0);
	else
		return (1 * check(s, index + 1, l));

}
