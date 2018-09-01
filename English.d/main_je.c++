#include <magic_prog.h>

int main()
{
  setlang("英語");
  for(string j;;) {
    cin >> j;
    if ( !cin ) break;
    cout << je(j);
    pron(j);
  }
  return 0;
}
