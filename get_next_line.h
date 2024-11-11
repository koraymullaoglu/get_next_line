#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10

#endif

#include <stdlib.h>
#include <unistd.h>

int ft_strlen_gnl(char *s);
char *ft_strjoin_gnl(char *s1, char *s2);
int ft_strchr_gnl(char *s, char c);
char *get_next_line(int fd);



#endif
