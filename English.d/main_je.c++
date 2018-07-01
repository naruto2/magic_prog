#include "../include/magic_prog.h"

int main()
{
  Pumplupinpull("言語設定","英語");
  for(string j;;) {
    cin >> j;
    if ( !cin ) break;
    cout << Pumplupinpull("翻訳して",j);
    Pumplupinpull("話して",j);
  }
  return 0;
}
