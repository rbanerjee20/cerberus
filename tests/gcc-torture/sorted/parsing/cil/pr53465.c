#include "cerberus.h"
/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

extern void abort() ;
static int const   a[2]  = {      1,      2};
void foo(int const   *x , int y ) 
{ 
  int i ;
  int b ;
  int c ;
  int d ;

  {
  b = 0;
  i = 0;
  while (i < y) {
    d = *(x + i);
    if (d == 0) {
      break;
    }
    if (b && d <= c) {
      abort();
    }
    c = d;
    b = 1;
    i ++;
  }
  return;
}
}
int main(void) 
{ 


  {
  foo(a, 2);
  return (0);
}
}
