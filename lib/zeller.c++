#include "../include/magic_prog.h"

string zeller( int y, int m, int d )
{
  if( m < 3 ) {
    y--; m += 12;
  }
  int x =  ( y + y/4 - y/100 + y/400 + ( 13*m + 8 )/5 + d )%7;

  static vector<string> days;
  days.push_back("日");
  days.push_back("月");
  days.push_back("火");
  days.push_back("水");
  days.push_back("木");
  days.push_back("金");
  days.push_back("土");

  return days[x];
}
