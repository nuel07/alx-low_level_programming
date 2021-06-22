#include "holberton.h"
/**
 * _islower - function that checks for lowercase letters
 * @c: The character to be checked.
 * Return: 1 if its a lowercase letter and 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
