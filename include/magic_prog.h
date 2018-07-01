#ifndef MAGIC_PROG_H
#define MAGIC_PROG_H
#include <iostream>
#include <sstream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <vector>
#include <cstdio>
#include <cstdlib>

using namespace std;

string je(string j);                //日本語から英語などに変換する
void pron(string j);                //日本語を英語などに翻訳して発音
void setlang(string name);          //je()で変換する言語の設定
string getlang();                   //je()で変換する言語の取得
void   jukebox(string str);         //音楽をかける
void   watch_start();               //ストップウォッチスタート
double watch_stop();                //ストップウォッチ時間計測
string zeller(int y, int m, int d); //年月日より曜日を割り出す
double usdjpy();                    //1ドル何円かを得る

#include "../include/featherstar.h"
#endif
