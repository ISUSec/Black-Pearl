#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int main(void)
{
  void *foo=malloc(1000);
  memcpy(foo, 0, 100);

  printf("the flag is CROSS_COUNTRY");

  return 0;
}
