#include <stdio.h>

void pre_main_message(void) __attribute__((constructor));

/**
 * pre_main_message - fn that prints a msg before the main fnc is executed.
 */
void pre_main_message(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
