#include <cstdio>
#include <chrono>

using namespace std;

static chrono::system_clock::time_point  start, end;

void watch_start()
{
  start = chrono::system_clock::now();
}

double watch_stop()
{
  end = chrono::system_clock::now();
  return chrono::duration_cast<chrono::milliseconds>(end-start).count()/1000.0;
}
