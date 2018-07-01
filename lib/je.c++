#include "../include/magic_prog.h"

string itoa(int x)
{
  string result;
  static char str[200];
  sprintf(str,"%d",x);
  for ( int i=0; str[i] != 0; i++ ) result.push_back(str[i]);
  return result;
}


string je(string j)
{

  string command = "trans -b ja:";
  command += getlang();
  command += " \"";
  command += j;
  command += "\"";

  FILE *pp;
  string e;
  pp = popen(command.c_str(),"r");
  for ( int c; EOF != (c = fgetc(pp)); ) e.push_back(c);
  pclose(pp);
  
  return e;
}

void pron(string j)
{
  string command = "trans -b -p ja:";
  command += getlang();
  command += " \"";
  command += j;
  command += "\">/dev/null 2>/dev/null";

  //command = "trans -b -p ja:en \""+j+"\">/dev/null 2>/dev/null";
  system(command.c_str());
}
