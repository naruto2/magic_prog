#include <magic_prog.h>

/// グレゴリウス暦1年1月1日からの経過日数を求める。
/// （グレゴリウス暦施行前の日付も、
///   形式的にグレゴリウス暦と同じルールで計算。）
int GetDays(int y, int m, int d)
{
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


int main()
{
  cout << 3648937080000+GetDays(2019,9,1)-GetDays(2003,1,1) << endl;
  return 0;
}
