#include "../include/magic_prog.h"

int main()
{
  vector<string> music;

  music.push_back("さくら 森山直太朗");
  music.push_back("さくら 唱歌");
  music.push_back("春の小川");
  music.push_back("茶摘み");
  music.push_back("うさぎ 唱歌");
  music.push_back("メヌエット ベートーベン");
  music.push_back("ふじ山");
  music.push_back("パフ");
  music.push_back("エーデルワイス");
  music.push_back("どこかで春が");
  music.push_back("七つの子");
  music.push_back("とんぼの めがね");
  music.push_back("シャボン玉 野口雨情");
  music.push_back("ミッキーマウス マーチ");

  int i=1;
  for ( auto str: music) cout<< i++<<" "<<str <<endl;
  
  cin >> i;

  Pumplupinpull("歌をください",music[i-1]);
}
