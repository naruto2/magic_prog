#include "magic_prog.h"

void sizes( char ch, int i, int* p)
{
  cout << "the size of char is " << sizeof(char)
       << ' ' << sizeof (ch) << '\n';
  cout << "the size of int is " << sizeof(int)
       << ' ' << sizeof (i) << '\n';
  cout << "the size of int* is " << sizeof(int*)
       << ' ' << sizeof (p) << '\n';
}


int main()
{
  int *p = (int*)malloc(10);
  sizes('a', 1, p);
}
