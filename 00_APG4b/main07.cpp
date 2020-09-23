//ApG4b ex12
#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int count=1;


  for(int i=0 ; i<S.size() ; i++){
    if(S.at(i)=='+'){
      count++;
    }
    if(S.at(i)=='-'){
      count--;
    }
  }

  cout << count << endl;

}
