#include "main.h"

/**
main - entry point

Description: prints alphabets 10 times

return: Always 0(Success)
*/
void print_alphabet_x10(void)
{

         int i;
	 int j;
	 
	 for (j= 1; i <=10; i++)
	 {
                 for (j = 97; j <=122; j++)
         	 {
                        _putchar(j);
                 }
                 _putchar('\n');
         }
}
