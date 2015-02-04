#include "stdio.h"
#include "string.h"

int main(void)
{
  char guess[10];
  int  result;

  puts("enter the password");
  fgets(guess, 10, stdin);

  if (strncmp (guess, "WEATHERMAN", 9) == 0)
  {
    puts("the flag");
  }
  else
  {
    puts("nope, try again");
  }

  return 0;
}
