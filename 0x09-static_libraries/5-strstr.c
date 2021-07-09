#include "holberton.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is located - a pointer to the beginning
 *                                       of the located substring.
 *         If the substring is not located - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
int i = 0;
while (needle[i])
{
while (*haystack)
{
if (*haystack == needle[i])
{
return (haystack);
}
haystack++;
}
if (needle == 0 || *needle == '\0')
{
return (0);
}
i++;
}
return (NULL);
}
