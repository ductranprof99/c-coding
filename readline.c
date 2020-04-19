#include <stdio.h>
#include "readline.h"

int read_line( const char* str )
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
 

