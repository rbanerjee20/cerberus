#include "cerberus.h"

unsigned long bar(void) { return 32768; }

int 
main (void)
{
  unsigned long nStyle = bar ();
  if (nStyle & 32768)
    nStyle |= 65536;
  if (nStyle != (32768 | 65536))
    abort ();
  return 0;
}

