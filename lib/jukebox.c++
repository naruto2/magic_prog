#include <iostream>
#include <cstdio>
#include <regex>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

std::string percentEnc(std::string str){
  const int NUM_BEGIN_UTF8 = 48;
  const int CAPITAL_BEGIN_UTF8 = 65;
  const int LOWER_BEGIN_UTF8 = 97;

  int charCode=-1;
  std::string encoded;
  std::stringstream out;

  //for文で1byteずつストリームに入れていく
  for(int i=0;str[i]!=0;i++){
    //文字列中の1byte分のデータを整数値として代入
    charCode = (int)(unsigned char)str[i];

    //エンコードする必要の無い文字の判定
    if((NUM_BEGIN_UTF8 <= charCode && charCode <= NUM_BEGIN_UTF8 + 9)
       || (CAPITAL_BEGIN_UTF8 <= charCode && charCode <= CAPITAL_BEGIN_UTF8 + 25)
       || (LOWER_BEGIN_UTF8 <= charCode && charCode <= LOWER_BEGIN_UTF8 + 25)
       || str[i] == '.' || str[i] == '_' || str[i] == '-' || str[i] == '~')
      {
	//エンコードの必要が無い文字はそのままストリームに入れる
	out<<str[i];
      }else{
      //エンコードする場合は%記号と文字コードの16進数表示をストリームに入れる
      out << '%' << std::hex << std::uppercase <<charCode;
    }
  }
  //ストリームの文字列をstringのインスタンスに代入しreturn
  encoded = out.str();
  return encoded;
}




using namespace std;

void jukebox(string key)
{
  string command = "wget https://www.youtube.com/results?search_query="
    + percentEnc(key) +" -q -O -";

  FILE *pp;

  pp = popen(command.c_str(),"r");

  string list;
  for (int c; EOF != (c=fgetc(pp));) list.push_back(c);
  pclose(pp);

  
  std::cmatch results;
  if (std::regex_search(list.c_str(), results, std::regex("/watch[\?]v=[A-Za-z0-9_-]*"))) {
    std::string s = results.str();      // 99 (マッチした文字列)
  }

  system("rm -f tmp.*");
  
  command = "youtube-dl --no-warnings -q -o tmp https://www.youtube.com" + results.str();
  
  system(command.c_str());

  system("ffmpeg -loglevel quiet -i tmp.* tmp.mp3");

  system("mpg123 -q tmp.mp3");

  system("rm -f tmp.*");
}
