#include <stdio.h>
#include "readline.h"

#include <string.h>

void append(char *s, char c) {
    size_t len = strlen(s);
    s[len] = c;
    s[len + 1] = '\0';
}
int read_line( const char *str )
{
    int count = 0;
    int offset = 0; 
    while (*(str + offset) != '\0')
    {
        ++count;
        ++offset;
    }

    return count;
}
 

