#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of a given function.
 * @start: Pointer to the start of the function.
 * @num_bytes: Number of opcodes to print.
 */
void print_opcodes(unsigned char *start, int num_bytes)
{
int i;

for (i = 0; i < num_bytes; i++)
{
printf("%02x ", start[i]);
}
printf("\n");
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array containing the command-line arguments.
 *
 * Return: 0 on success, 1 for incorrect no of args, 2 for negative no of bytes
 */
int main(int argc, char *argv[])
{
int num_bytes;
unsigned char *main_opcodes = (unsigned char *)main;

if (argc != 2)
{
printf("Error\n");
return (1);
}

num_bytes = atoi(argv[1]);

if (num_bytes < 0)
{
printf("Error\n");
return (2);
}

print_opcodes(main_opcodes, num_bytes);

return (0);
}
