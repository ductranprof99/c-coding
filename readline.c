#include<stdio.h>
#include "readline.h"

int read_line( char* str )
{
    int offset = 0;
    int count = 0;

    while (*(str + offset) != '\0')
    {
        ++count;
        ++offset;
    }

    return count;
}
 

