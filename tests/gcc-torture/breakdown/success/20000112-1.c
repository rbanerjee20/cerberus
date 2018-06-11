#include "cerberus.h"

static int 
special_format (const char *fmt)
{
  return (strchr (fmt, '*') != 0
          || strchr (fmt, 'V') != 0
          || strchr (fmt, 'S') != 0
          || strchr (fmt, 'n') != 0);
}

int 
main (void)
{
  if (special_format ("ee"))
    abort ();
  if (!special_format ("*e"))
    abort ();
  exit (0);
}

