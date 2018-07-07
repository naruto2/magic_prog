#include "../include/magic_prog.h"
#include "../include/featherstar.h"

string Pumplupinpull(string spell)
{
  if ( spell == "時間計測スタート" ) {
    watch_start();
    return "";
  }
  if ( spell == "時間計測ストップ" ) {
    return to_string(watch_stop());
  }
  if ( spell == "為替レート" ) {
    return to_string(usdjpy());
  }
  return "";
}


string Pumplupinpull(string spell, string arg)
{
  if ( spell == "歌をください" ) {
    jukeboxs(arg);
    return "";
  }
  if ( spell == "翻訳して" ) {
    return je(arg);
  }
  if ( spell == "話して" ) {
    pron(arg);
    return "";
  }
  if ( spell == "言語設定" ) {
    setlang(arg);
    return "";
  }
  if ( spell == "何曜日" ) {
    int y, m, d;
    replace(arg.begin(),arg.end(),'-',' ');
    replace(arg.begin(),arg.end(),'/',' ');

    stringstream ss;
    ss << arg;
    ss >> y;
    ss >> m;
    ss >> d;
    return zeller(y,m,d)+"曜日";
  }
  return "";
}
