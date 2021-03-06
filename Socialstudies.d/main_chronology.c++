#include <magic_prog.h>

int main()
{
  map<int,string> tab;

  tab[239] = "邪馬台国の女王卑弥呼が魏(中国)に使いを送る";
  tab[538] = "朝鮮から仏教が伝わる";
  tab[593] = "聖徳太子が摂政となる";
  tab[604] = "聖徳太子が十七条の憲法を定める";
  tab[607] = "法隆寺が建てられる。遣隋使の小野妹子";
  tab[630] = "第一回目の遣唐使";
  tab[645] = "大化の改新";
  tab[710] = "平城京に都がうつされる";
  tab[741] = "東大寺の大仏ができる";
  tab[794] = "平安京に都がうつされる";
  tab[894] = "遣唐使の廃止";
  tab[1016] = "藤原道長が摂政となる";
  tab[1053] = "平等院鳳凰堂ができる";
  tab[1167] = "平清盛が太政大臣となる";
  tab[1185] = "平氏滅びる。源頼朝が鎌倉幕府をひらく";
  tab[1192] = "源頼朝が征夷大将軍となる";
  tab[1274] = "一度目の元寇";
  tab[1281] = "二度目の元寇";
  tab[1333] = "鎌倉幕府滅び、後醍醐天皇による建武の新政";
  tab[1336] = "南朝と北朝の対立";
  tab[1338] = "足利尊氏が征夷大将軍、室町幕府をひらく";
  tab[1392] = "足利義満が南北朝を統一";
  tab[1397] = "足利義満が金閣を建てる";
  tab[1467] = "応仁の乱がおこる";
  tab[1489] = "足利義政が銀閣を建てる";
  tab[1543] = "鉄砲伝来";
  tab[1549] = "フランシスコ・ザビエルによりキリスト教伝わる";
  tab[1573] = "織田信長が室町幕府を滅ぼす";
  tab[1575] = "長篠の戦い";
  tab[1582] = "本能寺の変";
  tab[1590] = "豊臣秀吉による全国統一";
  tab[1592] = "文禄の役(朝鮮出兵)";
  tab[1597] = "慶長の役(朝鮮出兵)";
  tab[1600] = "関ヶ原の戦い";
  tab[1603] = "徳川家康が征夷大将軍となり江戸幕府をひらく";
  tab[1615] = "武家諸法度が定められる";
  tab[1635] = "参勤交代が定められる";
  tab[1637] = "島原・天草一揆";
  tab[1641] = "鎖国が完成する";
  tab[1774] = "杉田玄白らが解体新書を出版";
  tab[1798] = "本居宣長が古事記伝を完成";
  tab[1821] = "伊能忠敬が日本地図を完成";
  tab[1833] = "天保の大飢饉";
  tab[1837] = "大塩平八郎の乱";
  tab[1853] = "黒船が来航しペリーが開国を要求";
  tab[1854] = "日米和親条約";
  tab[1858] = "不平等条約を各国と結ぶ";
  tab[1867] = "徳川慶喜による大政奉還";
  tab[1868] = "五箇条の御誓文、江戸を東京とし、明治維新始まる";
  tab[1871] = "廃藩置県";
  tab[1872] = "学校制度が定められる、鉄道が開通";
  tab[1873] = "徴兵制度、地租改正";
  tab[1885] = "伊藤博文が初代内閣総理大臣になる";
  tab[1889] = "大日本帝国憲法が発布";
  tab[1890] = "第一回帝国議会";
  tab[1894] = "日清戦争";
  tab[1904] = "日露戦争";
  tab[1910] = "韓国併合";
  tab[1911] = "関税自主権を回復";
  tab[1914] = "第一次世界大戦がはじまる";
  tab[1923] = "関東大震災";
  tab[1925] = "普通選挙制度";
  tab[1931] = "満州事変";
  tab[1937] = "日中戦争がはじまる";
  tab[1939] = "第二次世界大戦がはじまる";
  tab[1941] = "太平洋戦争がはじまる";
  tab[1945] = "広島長崎に原子爆弾が落とされる。終戦";
  tab[1946] = "日本国憲法が公布";
  tab[1951] = "サンフランシスコ平和条約、日弁安全保障条約";
  tab[1956] = "国際連合に加盟";
  tab[1964] = "東京オリンピック";
  tab[1972] = "沖縄返還";
  tab[1978] = "日中平和友好条約";
  tab[1995] = "阪神・淡路大震災";
  tab[2002] = "日韓サッカーワールドカップ";
  tab[2011] = "東日本大震災";
#if 0  
  for (int i = 0; i< 3000; i++ ) if ( tab[i] != "" ) {
      cout << i << " ";
      cout << tab[i] <<endl;
    }
#endif      

  srand((unsigned int)time(NULL));


  for (int  k = 0; k < 10; k++) {
    int i = rand() % 3000;
    if( tab[i] !="" ) cout << tab[i] << endl;
    else{ k--; continue;}
    int n;
    cin >> n;
    if ( n == i ) cout << "正解" << endl;
    else cout << i <<endl;
  }
  return 0;
}
