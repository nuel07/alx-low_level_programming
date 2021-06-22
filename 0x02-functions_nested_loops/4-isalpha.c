#include "holberton.h"
/**
 * _isalpha - check if character is alphabetical, lower or upppercase
 * @c: character to be checked
 * Return: 1 if its alphabetical and 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
