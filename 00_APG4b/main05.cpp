//APG4b ex10

#include <bits/stdc++.h>
using namespace std;
//#define rep(i, n) for (int i = 0; i < (int)(n); i++)
//#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  int a,b;
  cin >> a >> b;

  int a_c = 0, b_c = 0;

  cout << "A:";

  while(a_c < a){
    cout << "]";
    a_c++;
  }
  cout << endl;

  cout << "B:";
  while(b_c < b){
    cout << "]";
    b_c++;
  }
  cout << endl;

}
