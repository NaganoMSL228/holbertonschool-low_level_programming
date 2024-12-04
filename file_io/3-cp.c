#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024
#define PERMISSIONS 0664

void print_error(const char *message, const char *filename)
{
    dprintf(STDERR_FILENO, message, filename);
}

int main(int argc, char *argv[])
{
    int src_fd, dest_fd;
    char buffer[BUFFER_SIZE];
    ssize_t bytes_read, bytes_written;

    if (argc != 3)
    {
        print_error("Usage: cp %s\n", "file_from file_to");
        exit(97);
    }

    src_fd = open(argv[1], O_RDONLY);
    if (src_fd == -1)
    {
        print_error("Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
    if (dest_fd == -1)
    {
        print_error("Error: Can't write to %s\n", argv[2]);
        close(src_fd);
        exit(99);
    }

    while ((bytes_read = read(src_fd, buffer, BUFFER_SIZE)) > 0)
    {
        bytes_written = write(dest_fd, buffer, bytes_read);
        if (bytes_written != bytes_read)
        {
            print_error("Error: Can't write to %s\n", argv[2]);
            close(src_fd);
            close(dest_fd);
            exit(99);
        }
    }

    if (bytes_read == -1)
    {
        print_error("Error: Can't read from file %s\n", argv[1]);
        close(src_fd);
        close(dest_fd);
        exit(98);
    }

    if (close(src_fd) == -1)
    {
        print_error("Error: Can't close fd %d\n", src_fd);
        exit(100);
    }

    if (close(dest_fd) == -1)
    {
        print_error("Error: Can't close fd %d\n", dest_fd);
        exit(100);
    }

    return 0;
}
