#include <magic_prog.h>

long zellern(int,int,int);
int GetDays(int,int,int);

int main()
{
  cout << GetDays(1,1,1) << endl;
  cout << GetDays(1,2,1) << endl;
  cout << 3648937080000+GetDays(2018,8,8) << endl;
  return 0;
}
