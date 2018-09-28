/* Programming Exercise 3-4 */
#include <stdio.h>
#include <stdlib.h>

void function(void);
/* ANSI/ISO C function prototyping */

int main(void)
{
	printf("\tEnter a floating-point value: ");	 /* For checking tab */
	printf(" $_______\b\b\b\b\b\b\b"); /* For checking \b */
	function();
	system("pause");
	return 0;
}

void function(void)
{	
	float num;
	scanf("%f", &num);
	printf("\n\tfixed-point notation: %.2f", num);  /* For checking %.2f */
	printf("\rGee!");  /* For checking \r */
	printf("\n\texponential notation: %e", num);
	printf("\n\tp notation: %a\n", num);
}