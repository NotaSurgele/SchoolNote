#include "database.h"
#include "my.h"

int main(int ac UNUSED, char **av)
{
    create_or_load_db(av[1]);
    return 0;
}