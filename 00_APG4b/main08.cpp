//ApG4b ex13

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int count = 0, sum = 0, ave;

  vector<int> a(N);

  for(int i=0 ; i<N ; i++){
    cin >> a.at(i);
    count++;
    sum += a.at(i);
  }

  ave = sum / count;

  for(int i=0 ; i<N ; i++){
    int b = a.at(i) - ave;
    if(b < 0){
      cout << -b <<endl;
    }else{
      cout << b << endl;
    }
  }


}
