//APG4b ex16

#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }
  string ans = "NO";

  // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
  // ここにプログラムを追記

  // if(data[0]==data[1]){
  //   cout << "Yes" << endl;
  // }
  // if(data[1]==data[2]){
  //   cout << "Yes" << endl;
  // }
  //
  // if(data[3]==data[4]){
  //     cout << "Yes" << endl;
  // }

  for(int i=0 ; i<data.size()-1 ; i++){
    if(data[i] == data[i+1]){
      ans = "YES";
      break;
    }
  }

  cout << ans << endl;



}
