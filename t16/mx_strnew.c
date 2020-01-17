#include <stdlib.h>

char *mx_strnew(const int size)
{
   if(size < 0) return NULL;
   char *buf;
   buf = (char *) malloc(sizeof(char) * (size + 1));
   if(buf == NULL) return NULL;
   int i = 0;
   while (i <= size + 1){
       buf[i] = '\0';
       i++;
   }
   return buf;
}

