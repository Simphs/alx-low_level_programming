#include "main.h"
/**
main - entry point

Description: a function that prints a putchar
return: Always 0(Success)
*/
void print_alphabet(void)
{

         int i;

         for (i = 97; i <=122; i++)
         {
                  _putchar(i);
         }
         _putchar('\n');
}
