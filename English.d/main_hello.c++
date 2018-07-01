#include "../include/magic_prog.h"

void hello(string lang)
{
  Pumplupinpull("言語設定",lang);
  string str = "こんにちは";
  cout << Pumplupinpull("翻訳して",str);
  Pumplupinpull("話して",str);
}
  

int main()
{
  hello("英語");
  hello("中国語");
  hello("ロシア語");
  hello("フランス語");
  hello("ドイツ語");
  hello("日本語");

  return 0;
}
