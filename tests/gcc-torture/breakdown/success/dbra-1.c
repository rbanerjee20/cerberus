#include "cerberus.h"
int 
f1 (long a)
{
  int i;
  for (i = 0; i < 10; i++)
    {
      if (--a == -1)
	return i;
    }
  return -1;
}

int 
f2 (long a)
{
  int i;
  for (i = 0; i < 10; i++)
    {
      if (--a != -1)
	return i;
    }
  return -1;
}

int 
f3 (long a)
{
  int i;
  for (i = 0; i < 10; i++)
    {
      if (--a == 0)
	return i;
    }
  return -1;
}

int 
f4 (long a)
{
  int i;
  for (i = 0; i < 10; i++)
    {
      if (--a != 0)
	return i;
    }
  return -1;
}

int 
f5 (long a)
{
  int i;
  for (i = 0; i < 10; i++)
    {
      if (++a == 0)
	return i;
    }
  return -1;
}

int 
f6 (long a)
{
  int i;
  for (i = 0; i < 10; i++)
    {
      if (++a != 0)
	return i;
    }
  return -1;
}


int 
main (void)
{
  if (f1 (5L) != 5)
    abort ();
  if (f2 (1L) != 0)
    abort ();
  if (f2 (0L) != 1)
    abort ();
  if (f3 (5L) != 4)
    abort ();
  if (f4 (1L) != 1)
    abort ();
  if (f4 (0L) != 0)
    abort ();
  if (f5 (-5L) != 4)
    abort ();
  if (f6 (-1L) != 1)
    abort ();
  if (f6 (0L) != 0)
    abort ();
  exit (0);
}
