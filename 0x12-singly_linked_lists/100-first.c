#include <stdio.h>

void pre_main_message(void) __attribute__((constructor));

/**
 * pre_main_message - Function that prints a message before the main function is executed.
 */
void pre_main_message(void)
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}