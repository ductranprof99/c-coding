#include "findsubstr.h"
#include "readline.h"

int main(int argc, char* argv[])
{
   int c = find_sub_string(argv[1],argv[2]);
   int a = read_line(argv[3]);
   printf("%d\n", c);
   printf("%d\n", a);
   return 0;
}


