#include<stdio.h>
/**
 * main - Prints all arguments it receives.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc int *argv[])
{
while(argc--)
printf("%s\n", *argv++);
return (0);
}
