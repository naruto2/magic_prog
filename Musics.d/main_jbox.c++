#include "../include/magic_prog.h"

int main()
{
  vector<string> music;  
  
  for (string str;;) {
    cin >> str;
    if ( !cin ) break;
    music.push_back(str);
  }

  for(unsigned int i=0; i<music.size(); i++)
    jukebox(music[i]);
}
