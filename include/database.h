#ifndef DATABASE_H_
#define DATABASE_H_

    int create_or_load_db(char *filename);
    char *load_data(int fd, char *filename);
#endif /* !DATABASE_H_ */