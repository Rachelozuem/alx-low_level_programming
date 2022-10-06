#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

int _putchar(char);
void free_grid(int **grid, int height);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);
char *argstostr(int ac, char **av);
char *create_array(unsigned int size, char c);
char **strtow(char *str);
int **alloc_grid(int width, int height);

#endif /* MAIN_H*/
