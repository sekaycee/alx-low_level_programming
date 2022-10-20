#include <stdio.h>

/**
 * bmain - execute function before main
 */
void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

