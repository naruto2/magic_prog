#include <magic_prog.h>

long zellern( int y, int m, int d )
{
  if( m < 3 ) {
    y--; m += 12;
  }
  long x =  ( y + y/4 - y/100 + y/400 + ( 13*m + 8 )/5 + d );

  return x;
}


/// <summary>
/// グレゴリウス暦1年1月1日からの経過日数を求める。
/// （グレゴリウス暦施行前の日付も、
///   形式的にグレゴリウス暦と同じルールで計算。）
/// </summary>
/// <param name="y">年</param>
/// <param name="m">月</param>
/// <param name="d">日</param>
/// <returns>1年1月1日からの経過日数</returns>
int GetDays(int y, int m, int d)
{
  // 1・2月 → 前年の13・14月
  if (m <= 2)
  {
    --y;
    m += 12;
  }
  int dy = 365 * (y - 1); // 経過年数×365日
  int c = y / 100;
  int dl = (y >> 2) - c + (c >> 2); // うるう年分
  int dm = (m * 979 - 1033) >> 5; // 1月1日から m 月1日までの日数
  return dy + dl + dm + d - 1;
}
