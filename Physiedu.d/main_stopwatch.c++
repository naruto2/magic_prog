#include "../include/magic_prog.h"

int main()
{
  Pumplupinpull("時間計測スタート");

  // 計測したい処理
  getchar();
  
  cout<<Pumplupinpull("時間計測ストップ")<<"秒"<<endl;

  return 0;
}
