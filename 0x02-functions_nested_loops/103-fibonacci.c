#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long f1 = 0, f2 = 1, fibsum;
float ev_sum;
while (1)
{
fibsum = f1 + f2;
if (fibsum > 4000000)
break;
if ((fibsum % 2) == 0)
ev_sum += fibsum;
f1 = f2;
f2 = fibsum;
}
printf("%.0f\n", ev_sum);
return (0);
}
