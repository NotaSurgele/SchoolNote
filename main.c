#include "database.h"
#include "my.h"
#include <stdlib.h>

int main(int ac UNUSED, char **av)
{
    int fd = 0;
    char *data = NULL;

    fd = create_or_load_db(av[1]);
    data = load_data(fd, av[1]);
    return 0;
}