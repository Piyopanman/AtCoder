//配列　54
//ソート　81
//string型を１文字ずつ処理　85
//２次元配列 90
//数値型 127
//型の変換　157
//pair,tiple 171
//STLの関数（map, queue, priority_queue, set, stack, deque, lower_bound, upper_bound） 241
//構造体、メンバ関数 469
//ビット計算 534
//小文字大文字の変換などchar関係 642
//string 文字数 は　(変数名).length()
//桁数指定　  cout << fixed << setprecision(9) << x << endl;



#include <bits/stdc++.h>とusing namespace std;は毎回最初に書く
C++のプログラムはmain関数から始まる
cout << "文字列" << endl;で文字列を出力できる
//や/* */でコメントを書ける

これは毎回コピペで良い

#include <bits/stdc++.h>
using namespace std;

int main() {
}


なお、5 / 2 * 3のように同じ優先順位の演算子が並んでいる式は、
基本的に左の演算子から順に計算されます。


#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;

  // 変数aで入力を受け取る cinで受け取れる
  cin >> a;  // >>　の向きに注意

  cout << a * 10 << endl;
}


文字列変数.size()で文字列の長さを取得できる
文字列変数.at(i)でi文字目にアクセスできる

string s, t;
  getline(cin, s); // 変数sで入力を一行受け取る
  getline(cin, t); // 変数tで入力を一行受け取る


  配列は様々なデータの列を扱うことができる機能
  vector<型> 配列変数名;で配列変数を宣言できる
  配列変数名 = { 要素1, 要素2, ... };で配列変数に値を代入できる
  配列変数.at(i)で
  i番目の要素にアクセスできる
  配列変数.size()で配列の要素数を取得できる
  vector<型> 配列変数名(要素数)と書くと指定した要素数で配列を初期化できる
  配列でN個の入力を受け取るときは、N要素で初期化した後、for文の中でatを使って1ずつ受け取る


vector<int> vec(3);はvector<int> vec = {0, 0, 0}とほとんど同じ意味です。

次のように書くと、配列の各要素の初期値を指定できます。
vector<型> 配列名(要素数, 初期値);
例えばvector<int> vec(3, 5);と書いた場合、配列変数vecは{5, 5, 5}で初期化されます。

vec.push_back(10); // 末尾に10を追加

 cout << vec[0] << endl; // .at(0)と同じ

 配列変数.pop_backを使えば配列の末尾の要素を削除することもできます。
 vec.pop_back(); // 末尾の要素を削除



 max(a, b) aとbのうち大きい方の値を返す
 swap(a, b) 変数aと変数bの値を交換する
 sort(vec.begin(), vec.end()) 配列変数vecをソートする（要素を小さい順に並び替える）
 reverse(vec.begin(), vec.end()) 配列変数vecの要素の並びを逆にする


string型の変数に対して１文字ずつ処理したいときに便利！範囲for文！
 int main() {
  string str = "hello";
  for (char c : str) {
    if (c == 'l') {
      c = 'L';
    }
    cout << c;
  }
  cout << endl;
}



2次元配列は2次元の表を扱うときに便利
vector<vector<要素の型>> 変数名(要素数1, vector<要素の型>(要素数2, 初期値))で宣言できる
初期値は省略可能
変数名.at(i).at(j)でi行目j列目へアクセスできる
変数名.size()で縦の大きさを取得できる
変数名.at(0).size()で横の大きさを取得できる
vector<vector<int>> data = {
  {7, 4, 0, 8},
  {2, 0, 3, 5},
  {6, 1, 7, 0},
};
vector<vector<int>> data(3, vector<int>(4,10)); // int型の2次元配列(3×4要素の)の宣言(初期値10)
変数名.at(上から何番目か).at(左から何番目か)
data.size();  // 3 (縦の要素数) (12ではないことに注意!)
data.at(0).size();  // 4 (横の要素数)


参照先の型 &参照の名前 = 参照先;で参照を宣言できる
  int a = 3;
  int &b = a;  // bは変数aの参照

  cout << "a: " << a << endl;  // aの値を出力
  cout << "b: " << b << endl;  // bの参照先の値を出力(aの値である3が出力される)



計算量に出てくるlogは「半分にする回数」を表すことが多いです。

double型の値を出力する際に出力する小数点以下の桁数を指定するには以下のようにする
cout << fixed << setprecision(桁数);

int型より大きい値を扱いたいときはint64_t型を使う
int型は(2 * 10^9)くらいまで

プログラム中に直接10のように値を書くと、それはint型の数値として扱われます。
int64_t型として扱ってほしい場合は10LLのように末尾にLLをつけましょう。

int main() {
  cout << 3.14159265358979 << endl;

  // 小数点以下10桁まで
  cout << fixed << setprecision(10);

  cout << 3.14159265358979 << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << 3.14159265358979 << endl;
  // 小数点以下10桁まで
  cout << fixed << setprecision(10);
  cout << 3.14159265358979 << endl;
}
実行結果
3.14159
3.1415926536

数値型から文字列に変換するには、to_string関数を用います。
int main() {
  int number = 100;
  string s = to_string(number);
  cout << s + "yen" << endl;
}

文字列からint型に変換するには、stoi関数を用います。
int main() {
  string s = "100";
  int n = stoi(s);
  cout << n << endl;
}

pairは2つの値の組を表す型です。
宣言・初期化
pair<型1, 型2> 変数名;
pair<型1, 型2> 変数名(値1, 値2);
アクセス
変数名.first   // 1つ目の値
変数名.second  // 2つ目の値
pairの生成
make_pair(値1, 値2)
pairの分解
型1 変数1;
型2 変数2;
tie(変数1, 変数2) = pair型の値;

int main() {
  pair<string, int> p("abc", 3);
  cout << p.first << endl;  // abc

  p.first = "hello";
  cout << p.first << endl;  // hello
  cout << p.second << endl; // 3

  p = make_pair("*", 1);

  string s;
  int a;
  tie(s, a) = p;
  cout << s << endl;  // *
  cout << a << endl;  // 1
}

tupleはpairを一般化したもので、「複数個の値の組」を表す型です。
宣言・初期化
tuple<型1, 型2, 型3, ...(必要な分だけ型を書く)> 変数名;
tuple<型1, 型2, 型3, ...(必要な分だけ型を書く)> 変数名(値1, 値2, 値3, ...); // 初期化
tupleでは0個以上の組を表現することができます。
アクセス
get<K>(tuple型の変数)  // K(定数)番目にアクセス

int main() {
  tuple<int, string, bool> data(1, "hello", true);
  get<2>(data) = false;
  cout << get<1>(data) << endl;  // hello

  data = make_tuple(2, "WORLD", true);

  int a;
  string s;
  bool f;
  tie(a, s, f) = data;
  cout << a << " " << s << " " << f << endl;  // 2 WORLD 1
}

pairやtupleを分解する際に要らない要素を捨てたい場合、
ignoreをtieの引数に渡すことで、対応する位置の値を捨てることができます。
int main() {
  pair<int, int> p(3, 5);
  int right;
  tie(ignore, right) = p;  // 2番目の値だけ取り出す
  cout << right << endl; // 5

  tuple<int, string, bool> tpl(2, "hello", false);
  int x;
  string s;
  tie(x, s, ignore) = tpl;  // 1番目の値、2番目の値だけ取り出す
  cout << x << " " << s << endl; // 2 hello
}



STLの関数
map, queue, priority_queue, set, stack, deque, lower_bound, upper_bound



mapは連想配列や辞書と呼ばれるデータ型です。
mapを用いると「特定の値に、ある値が紐付いている」ようなデータを簡単に扱うことができます。
int main() {
  map<string, int> score;  // 名前→成績
  score["Alice"] = 100;
  score["Bob"] = 89;
  score["Charlie"] = 95;

  cout << score.at("Alice") << endl;   // Aliceの成績
  cout << score.at("Bob") << endl;     // Bobの成績
  cout << score.at("Charlie") << endl; // Daveの成績
}
値の削除
変数.erase(key);

アクセス
変数.at(key)  // keyに対応するvalueが存在しない場合はエラーになる
変数[key]     // keyに対応するvalueが存在しない場合はValueの型の初期値が追加される

所属判定
Keyに対応するValueが存在するか判定するには次のようにします
if (変数.count(key)) {
  // keyに対応する関係が存在する
}
else {
  // keyに対応する関係が存在しない
}

ループ
// Keyの値が小さい順にループ
for (auto p : 変数名) {
  auto key = p.first;
  auto value = p.second;
  // key, valueを使う
}


キューは幅優先探索などのよく用いられるアルゴリズムに利用します。
int main() {
  queue<int> q;
  q.push(10);
  q.push(3);
  q.push(6);
  q.push(1);

  // 空でない間繰り返す
  while (!q.empty()) {
    cout << q.front() << endl;  // 先頭の値を出力
    q.pop();  // 先頭の値を削除
  }
}

要素を追加
変数.push(値);
先頭の要素へのアクセス
変数.front()
先頭の要素を削除
変数.pop();  // 先頭の要素が削除される
要素数の取得
変数.size()
キューが空であるかを調べる場合には、以下のように.empty()を用いることもできます。
変数.empty()  // キューが空ならtrueを返す



「それまでに追加した要素のうち、最も大きいものを取り出す」という処理を
行うときには、優先度付きキューというデータ構造を用います。
C++ではSTLのpriority_queueを用いることができます。
優先度付きキューはダイクストラ法などで用いられます。
int main() {
  priority_queue<int> pq;
  pq.push(10);
  pq.push(3);
  pq.push(6);
  pq.push(1);
  // 空でない間繰り返す
  while (!pq.empty()) {
    cout << pq.top() << endl;  // 最大の値を出力
    pq.pop();  // 最大の値を削除
  }
}
最大の要素の取得
変数.top()

次のようにしてpriority_queueを宣言すると、
値が小さい順に取り出されるようになります。
priority_queue<型, vector<型>, greater<型>> 変数;
int main() {
  // 小さい順に取り出される優先度付きキュー
  priority_queue<int, vector<int>, greater<int>> pq;
  pq.push(10);
  pq.push(3);
  pq.push(6);
  pq.push(1);

  // 空でない間繰り返す
  while (!pq.empty()) {
    cout << pq.top() << endl;  // 最小の値を出力
    pq.pop();  // 最小の値を削除　出力は1,3,6,10
  }



  setは重複の無いデータのまとまりを扱うためのデータ型です。
　「Keyだけのmap」のようなイメージです。実際にmapで代用することもできます。
  setは以下のような処理を行う場合などに有用です。
  ・配列の中に出現する値の種類数（重複の無い集合の要素数）
  ・集合の中にある値が含まれるかを高速に計算する
  ・集合の中に含まれる最小値（最大値）を求める
  int main() {
  set<int> S;
  S.insert(3);
  S.insert(7);
  S.insert(8);
  S.insert(10);
  // 既に3は含まれているのでこの操作は無視される
  S.insert(3);

  // 集合の要素数を出力
  cout << "size: " << S.size() << endl;  //4

  // 7が含まれるか判定
  if (S.count(7)) {
    cout << "found 7" << endl;
  }
  // 5が含まれるか判定
  if (S.count(5)) {
    cout << "found 5" << endl;
  }
}

値の追加
変数.insert(値);　//既に同じ値が存在する場合は追加されません。
値の削除
変数.erase(値);
最小値の取得
*begin(変数)
最大値の取得
*rbegin(変数)
ループ
for (auto value : 変数名) {
  // valueを使う
}
for (auto value : 変数名) {
  // valueを使う
}
ループでは値が小さいものから順に取り出されます。
値を追加した順ではないことに注意してください。



「新しく追加したものほど先に取り出される」ような処理を行うデータ構造を
スタックといいます。C++では、STLのstackを用いることができます。
宣言
stack<値の型> 変数名;
値の追加
変数.push(値);
次の値へのアクセス
変数.top()
値の削除
変数.pop();



最初に追加したものを取り出す」というキューの操作と 「最後に追加した要素を取り出す」というスタックの操作を
同時に行えるデータ構造を両端キューといいます。 C++では、STLのdequeを用いることができます。
先頭と末尾に対して追加・削除が行える配列のようなイメージです。
「i番目の値にアクセスする」こともできます。
int main() {
  deque<int> d;
  d.push_back(10);
  d.push_back(1);
  d.push_back(3);

  // この時点で d の内容は { 10, 1, 3 } となっている

  cout << d.front() << endl; // 10 (先頭の要素)
  d.pop_front();  // 先頭を削除

  // この時点で d の内容は { 1, 3 } となっている

  cout << d.back() << endl;  // 3 (末尾の要素)
  d.pop_back();  // 末尾を削除

  // この時点で d の内容は { 1 } となっている

  d.push_front(5);
  d.push_back(2);

  // この時点で d の内容は { 5, 1, 2 } となっている

  cout << d.at(1) << endl; // 1
}

宣言
deque<値の型> 変数名;
値の追加
変数.push_back(値);   // 末尾への値の追加
変数.push_front(値);  // 先頭への値の追加
値のアクセス
変数.front()  // 先頭の値へのアクセス
変数.back()   // 末尾の値へのアクセス
変数.at(i)  // i番目へのアクセス



昇順にソートされた配列において、「x以上の最小の要素」を求める場合には
STLのlower_boundを使うことができます。
同様に、「xを超える最小の要素」を求めるときにはupper_boundを使うことができます。
int main() {
  vector<int> a = {0, 10, 13, 14, 20};
  // aにおいて、12 以上最小の要素は 13
  cout << *lower_bound(a.begin(), a.end(), 12) << endl; // 13

  // 14 以上最小の要素は 14
  cout << *lower_bound(a.begin(), a.end(), 14) << endl; // 14

  // 10 を超える最小の要素は 13
  cout << *upper_bound(a.begin(), a.end(), 10) << endl; // 13
}



構造体を用いることで、「複数の型をまとめた新しい型」を定義することができます。
#include <bits/stdc++.h>
using namespace std;

struct MyPair {
  int x;     // 1つ目のデータはint型であり、xという名前でアクセスできる
  string y;  // 2つ目のデータはstring型であり、yという名前でアクセスできる
};

int main() {
  MyPair p = {12345, "hello"};  // MyPair型の値を宣言
  cout << "p.x = " << p.x << endl;
  cout << "p.y = " << p.y << endl;
}
#include <bits/stdc++.h>
using namespace std;

struct MyPair {
  int x;     // 1つ目のデータはint型であり、xという名前でアクセスできる
  string y;  // 2つ目のデータはstring型であり、yという名前でアクセスできる
};

int main() {
  MyPair p = {12345, "hello"};  // MyPair型の値を宣言
  cout << "p.x = " << p.x << endl;
  cout << "p.y = " << p.y << endl;
}
MyPairという構造体を定義しています。 この構造体はint型とstring型をまとめたもので、
それぞれx, yという名前がついています。 これら1つ1つのデータをメンバ変数といいます。
構造体の定義は関数の外側、内側のどちらにも書くことができます。
なお、構造体型の値のことをオブジェクトといいます。
はじめのサンプルプログラムのpはMyPair型のオブジェクトです。

構造体には、オブジェクトに関連した処理を行う関数を定義することができ、
この関数をメンバ関数といいます。
#include <bits/stdc++.h>
using namespace std;

struct MyPair {
  int x;
  string y;
  // メンバ関数
  void print() {
    // 直接x, yにアクセスできる
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
  }
};

int main() {
  MyPair p = { 12345, "Hello" };
  p.print();  // オブジェクト`p`の`print`を呼び出す

  MyPair q = { 67890, "APG4b" };
  q.print();  // オブジェクト`q`の`print`を呼び出す
}
実行結果
x = 12345
y = Hello
x = 67890
y = APG4b
コンストラクタも定義できる



「0」か「1」の2通りの状態を表現することができるデータの単位をビットといいます。
ビット列を用いると物の集まり(以下、集合と呼びます)を表現することができます。
ある要素を含むなら対応するビットを1にし、含まないなら対応するビットを0にすることで表現することができます。
C++でビット列を扱うにはbitsetを用います。
bitset<ビット数> 変数名;  // すべてのビットが0の状態で初期化される
bitset<ビット数> 変数名("ビット列(長さはビット数に合わせる)");  // 指定したビット列で初期化される
bitset<4> b("1010");

bitsetに対するビット演算はC++の演算子として定義されています。
これらのビット演算の末尾に=を付けることで複合代入演算子として用いることができます。
ビット毎のAND演算  	&	    変数1 & 変数2
ビット毎のOR演算	    |	    変数1 | 変数2
ビット毎のXOR演算  	^	    変数1 ^ 変数2
ビット毎のNOT演算  	~	        ~変数
論理左シフト演算	   <<	   変数 << シフトするビット数
論理右シフト演算  	 >>	   変数 >> シフトするビット数

ビット列を扱うときに便利な関数
特定のビットの値を変更する	変数.set(位置, 値);
特定のビットが1になっているかを調べる	変数.test(調べる位置);
全てのビットを1にする	変数.set();
特定のビットを1にする	変数.set(1にする位置);
全てのビットを0にする	変数.reset();
全てのビットを反転する	変数.flip();
全てのビットが1になっているかを判定する	変数.all()
ずれかのビットが1になっているかを判定する	変数.any()
1のビットの個数を数える	変数.count()
int main() {
  bitset<4> S;
  S.set(0, 1);  // 0番目のビットを1にする 0001
  cout << S << endl;

  if (S.test(3)) {
    cout << "4th bit is 1" << endl;
  } else {
    cout << "4th bit is 0" << endl;  //こっち
  }

ビット演算に用いる演算子は優先順位が低いものが多いので、明示的に()でくくる必要がある場合があります。
int main() {
  int x = 5;  // 0101
  int y = 10; // 1010
  // if (x & y > 0) { // &演算子よりも>演算子の優先度の方が高いので x & (y > 0) と解釈される
  if ((x & y) > 0) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;  //こっち
  }
}

「ビット全探索」と呼ばれるテクニックを紹介します。
ビット全探索によって、組合せの全列挙をシンプルに実装することができます。
ビット全探索とは「すべてのビット列の組合せ」に対して何らかの処理を行うことをいいます。
例えば、長さ2のビット列ならば、すべてのビット列の組合せは「00」「01」「10」「11」の4通りです。
次のサンプルプログラムでは、すべての「長さ3のビット列」を列挙しています。
int main() {
  // 3ビットのビット列をすべて列挙する
  for (int tmp = 0; tmp < (1 << 3); tmp++) {
    bitset<3> s(tmp);
    // ビット列を出力
    cout << s << endl;
  }
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  // 3ビットのビット列をすべて列挙する
  for (int tmp = 0; tmp < (1 << 3); tmp++) {
    bitset<3> s(tmp);
    // ビット列を出力
    cout << s << endl;
  }
}
実行結果
000
001
010
011
100
101
110
111
0から始めて8になるまでのfor文です。 1 << 3は、2の3乗を得るための式です。 1を3ビット左シフトすると、
ビット列は「1000」となり、これを2進数として解釈すると2の3乗=8になります。
2のk乗の値を得るために、1 << kという書き方をすることがよくあります。
一般には、0から２のN乗−1の範囲でループすることで、 長さNのビット列をすべて列挙することができます。

次の形でビット全探索を行うことができます。
bitsetの長さの指定に変数は使えないことに注意してください。
また、このアルゴリズムはビット列の長さをNとして２のN乗回以上のループになるので計算量に注意しましょう。
for (int tmp = 0; tmp < (1 << ビット数); tmp++) {
  bitset<ビット数> s(tmp);
  // (ビット列sに対する処理)
}

整数からbitsetへの変換　bitset<ビット数> 変数名(整数);
bitsetから整数への変換　bitsetの変数.to_ullong()



次のプログラムはこれを用いて'A'～'Z'を出力します。
int main() {
  for (int i = 0; i <= ('Z' - 'A'); i++) {
    cout << (char)('A' + i);
  }
}

小文字→大文字の変換は(char)toupper(文字)、
大文字→小文字の変換は(char)tolower(文字)で利用できます。
大文字の判定はC++で用意されている関数を使ってisupper(文字)で行うこともできます。
同様の便利な関数として小文字の判定を行うislower(文字)や、
10進数の数字かどうかをチェックするisdigit(文字)などもあります。

2つの数値の入力のうち小さい方を出力
int main() {
  int a, b;
  cin >> a >> b;
  // 小さい方の値をanswerに代入する
  int answer = a < b ? a : b;
  cout << answer << endl;
}
条件演算子の書き方は次のようになります。
条件式 ? 真の時の式 : 偽の時の式

next_permutation関数は「順列の全列挙」を行うための関数です。
次のプログラムは{ 1, 2, 3 }という配列に対して、すべての順列を出力しています。
int main() {
  vector<int> v = { 2, 1, 3 };
  sort(v.begin(), v.end());
  do {
    // 1行で今の並び方を出力
    for (int x : v) {
      cout << x << " ";
    }
    cout << endl;
  } while (next_permutation(v.begin(), v.end()));
}
実行結果
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
next_permutation関数は次のように使います。
事前にsortが必要なことに注意してください。
sort(配列変数.begin(), 配列変数.end());
do {
  // 順列に対する処理
} while (next_permutation(配列変数.begin(), 配列変数.end()));
next_permutation関数を使って順列の全列挙を行った場合の計算量は、配列の長さを
NとするとO(N!)になります。
