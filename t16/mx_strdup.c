#include <stdlib.h>
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);

char *mx_strdup(const char *str)
{
    int len = mx_strlen(str);
    char *buf = mx_strnew(len);
    mx_strcpy(buf,str);
    return buf;
}

