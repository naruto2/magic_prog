#include "../include/magic_prog.h"

using namespace std;


int main()
{
  watch_start();

  // 計測したい処理
  getchar();
  
  printf("%.3f\n",watch_stop());

  return 0;
}
