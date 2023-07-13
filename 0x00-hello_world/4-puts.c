#include <stdio.h>

/*
 *
 * The main function of this program declares a string, stored in the character pointer variable 'text'.
 * This string contains the statement: "Programming is like building a multilingual puzzle".
 * The function then prints this string to the standard output (typically the terminal or console)
 * using the 'puts' function from the standard I/O library (stdio.h).
 * The program returns 0 upon successful execution, signaling successful termination to the operating system.
 *
 */


int main(void)
{
	char *text = "\"Programming is like building a multilingual puzzle";

	puts(text);
	return 0;
}
