#include "magic_prog.h"

void sizes( char ch, int i, int* p)
{
  bool b;
  double d;
  long double ld;
  
  cout << "the size of char is " << sizeof(char)
       << ' ' << sizeof (ch) << '\n';
  cout << "the size of int is " << sizeof(int)
       << ' ' << sizeof (i) << '\n';
  cout << "the size of int* is " << sizeof(int*)
       << ' ' << sizeof (p) << '\n';
  cout << "the size of bool is " << sizeof(bool)
       << ' ' << sizeof (b) << '\n';
  cout << "the size of double is " << sizeof(double)
       << ' ' << sizeof (d) << '\n';
  cout << "the size of long double is " << sizeof(long double)
       << ' ' << sizeof (ld) << '\n';
}


int main()
{
  int *p = (int*)malloc(10);
  sizes('a', 1, p);
}
