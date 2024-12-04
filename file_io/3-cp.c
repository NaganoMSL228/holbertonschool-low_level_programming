#include "main.h"
#include <stdio.h>

/**
* error_exit - Print an error message and exit with a given code.
* @code: Exit code.
* @message: Error message format.
* @filename: Name of the file causing the error.
*/
void error_exit(int code, const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(code);
}

/**
* copy_file - Copies the content from one file to another.
* @file_from: The source file.
* @file_to: The destination file.
*
* Return: 1 on success, or -1 on failure.
*/
int copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;

	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", file_from);

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664); // rw-rw-r--
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to %s\n", file_to);

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			error_exit(99, "Error: Can't write to %s\n", file_to);
	}

	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file %s\n", file_from);

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", fd_from);

	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", fd_to);

	return (1);
}

/**
* main - Entry point of the program.
* @argc: Argument count.
* @argv: Argument vector.
*
* Return: Always 0 on success.
*/
int main(int argc, char **argv)
{
	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", "");

	copy_file(argv[1], argv[2]);

	return (0);
}
