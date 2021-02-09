#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int create_or_load_db(char *filename)
{
    int fd = 0;

    fd = open(filename, O_CREAT);
    return fd;
}