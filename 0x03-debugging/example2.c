#include <stdio.h>   
/**
 * main - debugging example                                                                        
 * Return: 0                                                                                       
 */                                                                                                
int main(void)                                                                                     
{                                                                                                  
  int i;                                                                                     
  int j;                                                                                     

  for (i = 0; i < 10; i++)                                                                   
    {                                                                                          
      j = i;                                                                             
      while (j < 10)                                                                     
	{                                                                                  
	  printf("%d", j);                                                           
	}                                                                                  
      printf("\n");                                                                      
    }                                                                                          

  return (0);                                                                                
}
