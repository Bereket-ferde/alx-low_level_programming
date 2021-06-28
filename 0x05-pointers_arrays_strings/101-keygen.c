#include "holberton.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*
*
*/
int main(void)
{

int num = rand(), i;
srand(time(0));

  for(i = 0; i<4; i++)
      printf("%d\n", num);
return (0);
}
