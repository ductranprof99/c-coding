#include "findsubstr.h"
#include "readline.h"

int main(int argc, char* argv[])  { 	
  printf("%s\n" ,argv[1]);
  printf("%s\n" ,argv[2]);
  int bai1 = find_sub_string(argv[1],argv[2]);
  printf("%d\n",bai1);
  int c;
  char *s;
  size_t i = 1;
  s = malloc(i * sizeof(char));
  *s = '\0';
  while ((c = getchar()) != EOF) {
      i++;
      s = realloc(s, i * sizeof(char));
      append(s, c);
    if (c == '\n')
    {
      printf("%d\n",read_line(s));
      i = 1;
      s = realloc(s, i * sizeof(char));
      *s = '\0';
    }
  }
  printf("%d\n",1);
  return 0;
} 


