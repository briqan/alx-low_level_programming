#include <stdio.h>

/**
 * main - check the code
 *
 * print_alphabet: prints .
*/
 int main ()
{
        int j =90;

        for ((j >= 97) && (j <= 122); j++;)
        {
                /**
                 * print_alphabet-prints alphabets
                 */
                putchar(j);
        }
      putchar('\n');
      return(0);

}
