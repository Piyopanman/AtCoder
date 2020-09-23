//APG4b ex8
#include <bits/stdc++.h>
using namespace std;

int main() {

  int patern;

  cin >> patern;

  if(patern == 1){
    int price,N;
    cin >> price >> N;
    cout << price * N << endl;
  }else{
    int price,N;
    string text;
    cin >> text >> price >> N;
    cout << text << "!" << endl;
    cout << price * N << endl;
  }

}
