#include "main.h"

#define BUF_SIZE 1024

/**
 * error_exit - Print error message and exit with specified code
 * @code: The exit code
 * @message: The error message to print
 */
void error_exit(int code, const char *message)
{
    dprintf(STDERR_FILENO, "%s\n", message);
    exit(code);
}

/**
 * main - Copy the content of a file to another file
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0 on success, or the corresponding error code on failure
 */
int main(int argc, char **argv)
{
    int file_from, file_to, bytes_read, bytes_written;
    char buf[BUF_SIZE];

    if (argc != 3)
        error_exit(97, "Usage: cp file_from file_to");

    file_from = open(argv[1], O_RDONLY);
    if (file_from == -1)
        error_exit(98, "Error: Can't read from file");

    file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (file_to == -1)
        error_exit(99, "Error: Can't write to file");

    while ((bytes_read = read(file_from, buf, BUF_SIZE)) > 0)
    {
        bytes_written = write(file_to, buf, bytes_read);
        if (bytes_written != bytes_read)
            error_exit(99, "Error: Can't write to file");
    }

    if (bytes_read == -1)
        error_exit(98, "Error: Can't read from file");

    if (close(file_from) == -1)
        error_exit(100, "Error: Can't close file descriptor");

    if (close(file_to) == -1)
        error_exit(100, "Error: Can't close file descriptor");

    return (0);
}
