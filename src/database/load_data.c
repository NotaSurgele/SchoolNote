#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "database.h"
#include "my.h"

size_t get_data_size(char *filename)
{
    struct stat st;

    if (stat(filename, &st) == 0) {
        return st.st_size;
    }
    return -1;
}

char *load_data(int fd, char *filename)
{
    size_t size UNUSED = get_data_size(filename);
    int check UNUSED = 0;
    char *data = NULL;

    data = malloc(sizeof(char) * (size + 1));
    check = read(fd, data, size);
    if (check == -1) {
        my_printf("Error while reading the database !\n");
        return NULL;
    }
    return data;
}