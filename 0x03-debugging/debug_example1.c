#include <stdio.h>                                                                                  
/**
 * main - debugging example                                                                         
 * Return: 0                                                                                        
 */                                                                                                 
int main(void)                                                                                      
{                                                                                                   
  char *hello = "Hello, World!";                                                              

  for (i = 0; hello[i] != '\0'; i++) /* i is undeclared, first error */
    {                                                                                           
      printf("%c", hello[i]);                                                             
    }                                                                                           

  printf("\n");                                                                               

  return (0);                                                                                 
}
