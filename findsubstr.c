#include <stdio.h>
#include "findsubstr.h"

int size( const char *ptr0 )
{
    int offset = 0;
    int count = 0;

    while (*(ptr0 + offset) != '\0')
    {
        ++count;
        ++offset;
    }
    return count;
}

int find_sub_string( const char* str, const char* sub )
{
   int length1 = size(str);
   int length2 = size(sub); 
   int count = 0;
   for ( int i = 0; i < length1; ++i )
   {
      if ( str[i] == sub[count] ) 
         ++count;
      else count = 0;
      if ( count == length2 )
      {
         count = i;
         break; 
      }
   }
   if ( count == 0 ) return -1;
   return count-length2+1;
}
