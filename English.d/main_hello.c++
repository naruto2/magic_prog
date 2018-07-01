#include "../include/magic_prog.h"

void hello()
{
  string str = "こんにちは";
  cout << je(str);
  pron(str);
}
  

int main()
{
  setlang("英語");
  hello();
  setlang("中国語");
  hello();
  setlang("ロシア語");
  hello();
  setlang("フランス語");
  hello();
  setlang("ドイツ語");
  hello();
  setlang("日本語");
  hello();

  return 0;
}
