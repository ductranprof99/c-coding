#include "findsubstr.h"
#include "readline.h"

int main(int argc, char* argv)  { 
  char c; 
  c=getchar(); 
  int count = 0;
  while(c!=EOF)  { 
    count++;
    if ( c == '\n' )
    {
       printf("%d\n", count);
       count = 0;
    }
    c=getchar(); 
  } 
  printf("\n%d",-1);
  return 0;
} 


