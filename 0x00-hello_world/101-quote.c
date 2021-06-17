#include <stdio.h> 
/**
 * main - entry point
 * write - print function
 * Return: return 1
 */
int write(int filedes, const char *buf, unsigned int nbyte);
int main() 
{ 
  write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 13); 
  return (1); 
}
