#include <stdio.h>
#include "lists.h"

static void bfxn_main(void) __attribute__((constructor));

/**
 * bfxn_main - prints the message before main fxn
 * Return: Nothing!.
 */

void bfxn_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
