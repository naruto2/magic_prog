#include "../include/magic_prog.h"
#include <ctype.h>
#include <sstream>
#include <map>

string lang2la(string lang)
{
  string la="";

  unsigned int i;
  for (i=0; i<lang.size(); i++) if ( lang[i] == '-' ) break;
  i++;
  for (   ; i<lang.size(); i++) la.push_back(lang[i]);
  return la;
}


string lang(string tolang)
{
  string list;
  string command {"trans -R|col|sed -e 's/22m/\\n/g'|sed -e 's/Ch_bar//g'|sed -e 's/1m//g'|sed -e 's/ //g'|sed -e 's/\\t//g'|sort"};
  FILE *pp=popen(command.c_str(),"r");

  for ( ;; ) {
    int c = fgetc(pp);
    if ( c == EOF ) break;
    if ( !isascii(c) ) continue;
    list.push_back(c);
  }
  pclose(pp);
  stringstream ss;

  ss << list;

  vector<string> allLang;
  
  for ( ; ; ) {
    string lang;
    ss >> lang;
    if (!ss) break;
    allLang.push_back(lang2la(lang));
  }
  for (unsigned int i=0; i<allLang.size();i++) if(tolang==allLang[i]) return allLang[i];
  return tolang;
}

static map<string,string> langmap;
static string currentlang;

void setlang(string name)
{
  langmap["アフリカ語"] = "af";
  langmap["アルバニア語"] = "sq";
  langmap["アラビア語"] = "ar";
  langmap["アルメニア語"] = "hy";
  langmap["アゼルバイジャン語"] = "az";
  langmap["ベラルーシ語"] = "be";
  langmap["ボスニア語"] = "bs";
  langmap["ブルガリア語"] = "bg";
  langmap["広東語"] = "yue";
  langmap["中国語"] = "zh-CN";
  langmap["台湾語"] = "zh-TW";
  langmap["コルシカ語"] = "co";
  langmap["クロアチア語"] = "hr";
  langmap["オランダ語"] = "nl";
  langmap["東マリ語"] = "mhr";
  langmap["英語"] = "en";
  langmap["エスペラント語"] = "eo";
  langmap["エストニア語"] = "et";
  langmap["フィジー語"] = "fj";
  langmap["タガログ語"] = "tl";
  langmap["フランス語"] = "fr";
  langmap["ガリシア語"] = "gl";
  langmap["ドイツ語"] = "de";
  langmap["ギリシャ語"] = "el";
  langmap["ハウサ語"] = "ha";
  langmap["ハワイ語"] = "haw";
  langmap["ヘブル語"] = "he";
  langmap["ヒンディー語"] = "hi";
  langmap["ハンガリー語"] = "hu";
  langmap["アイスランド語"] = "is";
  langmap["インドネシア語"] = "id";
  langmap["ガリア語"] = "ga";
  langmap["イタリア語"] = "it";
  langmap["日本語"] = "ja";
  langmap["クリンゴン語"] = "tlh";
  langmap["韓国語"] = "ko";
  langmap["キルギス語"] = "ky";
  langmap["ラテン語"] = "la";
  langmap["ラトビア語"] = "lv";
  langmap["リトアニア語"] = "lt";
  langmap["モンゴル語"] = "mn";
  langmap["ミャンマー語"] = "my";
  langmap["ノルウェー語"] = "no";
  langmap["ペルシャ語"] = "fa";
  langmap["ポルトガル語"] = "pt";
  langmap["ロマ語"] = "ro";
  langmap["ロシア語"] = "ru";
  langmap["サモア語"] = "sm";
  langmap["シンハラ語"] = "si";
  langmap["スロバキア語"] = "sk";
  langmap["スロベニア語"] = "sl";
  langmap["スペイン語"] = "es";
  langmap["スワヒリ語"] = "sw";
  langmap["スウェーデン語"] = "sv";
  langmap["タジク語"] = "tg";
  langmap["タミル語"] = "ta";
  langmap["タタール"]="tt";
  langmap["タイ語"]="th";
  langmap["トンガ語"]="to";
  langmap["トルコ語"]="tr";
  langmap["ウクライナ語"]="uk";
  langmap["ウルドゥー語"]="ur";
  langmap["ウズベク語"]="uz";
  langmap["ベトナム語"]="vi";
  langmap["マオリ語"]="mi";
  langmap["ズールー語"]="zu";

  if (langmap[name] == "")
    currentlang = lang(name);
  else 
    currentlang = lang(langmap[name]);
}

string getlang()
{
  return currentlang;
}

