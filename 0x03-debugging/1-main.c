#include <stdio.h>

/**
* main - causes an infinite loop
* while (i < 10) causing infinite loop no i++
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
		/**
		 * * while (i < 10) causing infinite loop no i++
		 */
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
