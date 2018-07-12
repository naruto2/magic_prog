#include "../include/magic_prog.h"


void shuffle(vector<string> &w)
{
  srand((unsigned int)time(NULL));
  for(unsigned int i = 0; i<32*w.size(); i++)
    swap(w[rand() % w.size()],w[rand() % w.size()]);
}


int main()
{
  map<string,string> Karuta;
  
  Karuta["い"] = "犬も歩けば棒に当たる";
  Karuta["ろ"] = "論より証拠";
  Karuta["は"] = "花より団子";
  Karuta["に"] = "憎まれっ子世にはばかる";
  Karuta["ほ"] = "骨折り損のくたびれ儲け";
  Karuta["へ"] = "下手の長談義";
  Karuta["と"] = "年寄りの冷や水";
  Karuta["ち"] = "ちりも積もれば山となる";
  Karuta["り"] = "律義者の子沢山";
  Karuta["ぬ"] = "盗人の昼寝";
  Karuta["る"] = "瑠璃も玻璃も照らせば光る";
  Karuta["を"] = "老いては子に従え";
  Karuta["わ"] = "破れ鍋に綴じ蓋";
  Karuta["か"] = "かったいの瘡うらみ";
  Karuta["よ"] = "よしのずいから天井のぞく";
  Karuta["た"] = "旅は道連れ世は情け";
  Karuta["れ"] = "良薬は口ににがし";
  Karuta["そ"] = "総領の甚六";
  Karuta["つ"] = "月とすっぽん";
  Karuta["ね"] = "念には念をいれよ";
  Karuta["な"] = "泣きっ面に蜂";
  Karuta["ら"] = "楽あれば苦あり";
  Karuta["む"] = "無理が通れば道理引っ込む";
  Karuta["う"] = "嘘から出た真";
  Karuta["ゐ"] = "芋の煮えたもご存じない";
  Karuta["の"] = "喉元過ぎれば熱さを忘れる";
  Karuta["お"] = "鬼に金棒";
  Karuta["く"] = "臭いものに蓋をする";
  Karuta["や"] = "安物買いの銭失い";
  Karuta["ま"] = "負けるが勝ち";
  Karuta["け"] = "芸は身を助く";
  Karuta["ふ"] = "文はやりたし書く手は持たぬ";
  Karuta["こ"] = "子は三界の首枷";
  Karuta["え"] = "えてに帆をあぐ";
  Karuta["て"] = "亭主の好きな赤烏帽子";
  Karuta["あ"] = "頭隠して尻隠さず";
  Karuta["さ"] = "三遍回って煙草にしょ";
  Karuta["き"] = "聞いて極楽見て地獄";
  Karuta["ゆ"] = "油断大敵";
  Karuta["め"] = "目の上のこぶ";
  Karuta["み"] = "身から出た錆";
  Karuta["し"] = "知らぬが仏";
  Karuta["ゑ"] = "縁は異なもの味なもの";
  Karuta["ひ"] = "貧乏暇なし";
  Karuta["も"] = "門前の小僧習わぬ経を読む";
  Karuta["せ"] = "急いては事を仕損じる";
  Karuta["す"] = "粋は身を食う";
  Karuta["京"] = "京の夢大阪の夢";
  

  vector<string> v {"い","ろ","は","に","ほ","へ","と",
      "ち","り","ぬ","る","を",
      "わ","か","よ","た","れ","そ",
      "つ","ね","な","ら","む",
      "う","ゐ","の","お","く","や","ま",
      "け","ふ","こ","え","て",
      "あ","さ","き","ゆ","め","み","し",
      "ゑ","ひ","も","せ","す","京"};

  shuffle(v);
  
  for (unsigned int i=0; i<v.size(); i++)
    cout << v[i] << " ";
  cout << endl;

  for (unsigned int i=0; i<v.size(); i++) {
    Pumplupinpull("話して",Karuta[v[i]]);
    string str;
    getline(cin,str);
  }
  return 0;
}
