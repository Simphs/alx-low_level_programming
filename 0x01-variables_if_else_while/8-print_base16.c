#include <stdio.h>
/**
main - entry point
Description: 'print numbers of base 16'
return: Always 0(Success)
*/

int main(void)
{

         int digit = 48; /*48 decimal rep of 0*/
	 
	 while (digit <= 102) /*102; decimal rep of f*/
	 {
		putchar(digit);

		/* after 9 jump till we reach 96; '*/
		if (digit == 57)
			digit += 39;
		digit++;
	  }
	  putchar('\n');
	  
	  return (0);
}
