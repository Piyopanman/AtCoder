//abc176_2

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  string n;
  cin >> n;
  int sum = 0;

  for(int i=0 ; i<n.size() ; i++){
    sum += n[i] - '0';
  }
  if(sum % 9 == 0){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

}
