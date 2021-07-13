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
int arg;
for (arg = 0; arg < argc; arg++)
printf("%s\n", argv[arg]);
return (0);
}
