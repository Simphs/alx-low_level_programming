#include <stdio.h>
/**
main - entry point
Description: 'print numbers of base 16'
return: Always 0(Success)
*/

int main(void)
{

         int digit = 0;
	 
	 while (digit <= 9) 
	 {
		putchar(digit + 48);
		if (digit != 9)
	        {
			putchar(',');
			putchar(' ');
	        }
	 
	 	digit++;
	  }
	  putchar('\n');

	  return (0);
}
