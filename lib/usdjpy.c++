#include <cstdio>
#include <cstdlib>
#include <string>

using namespace std;

double usdjpy()
{
  FILE *pp;
  pp = popen("wget "
	     "\"https://info.finance.yahoo.co.jp/fx/convert/?a=1&s=USD&t=JPY\""
	     " -q -O -|grep \"price noLine\"","r");

  string str;
  int state = 0;
  for( int c; EOF !=(c=fgetc(pp));){
    if ( c == '>' ) state = 1;
    if ( c == '<' ) state = 0;
    if (state && c != '>' ) str.push_back((char)c);
  }
  pclose(pp);
  
  return atof(str.c_str());
}
