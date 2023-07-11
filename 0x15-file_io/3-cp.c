#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * copy_file - Copy the content of a file to another file
 * @src_file: The source file name
 * @dest_file: The destination file name
 */
void copy_file(const char *src_file, const char *dest_file)
{
int src_fd, dest_fd, read_size;
char buffer[1024];
src_fd = open(src_file, O_RDONLY);
if (!src_file || src_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
exit(98);
}
dest_fd = open(dest_file, O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (dest_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
exit(99);
}
while ((read_size = read(src_fd, buffer, 1024)) > 0)
{
if (write(dest_fd, buffer, read_size) != read_size)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
exit(99);
}
}
if (read_size == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
exit(98);
}
if (close(src_fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
exit(100);
}
if (close(dest_fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
exit(100);
}
}

/**
 * main - Entry point
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0 on success, or the corresponding error code on failure
 */
int main(int argc, char **argv)
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

copy_file(argv[1], argv[2]);
exit(0);
}
