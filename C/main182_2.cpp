//abc182_2

#include <bits/stdc++.h>
#include <string>
using namespace std;
int a[3];
int main() {
  long long n,sum=0,cnt=0;
  int ans = 0;
  cin >> n;

  while(n){
    sum += n % 10;  //各位の和
    a[n % 10 % 3]++; //割った余りが0,1,2のものをそれぞれ数えてる
    n /= 10; //次の位をチェック
    cnt++; //桁数
  }


  if(sum % 3 == 0){
    ans = 0;
  }else if(sum % 3 == 1){
    if(a[1] > 0){
      ans = 1;
    }else if(a[2] > 1){
      ans = 2;
    }
  }else if(sum % 3 == 2){
    if(a[2] > 0){
      ans = 1;
    }else if(a[1] > 1){
      ans = 2;
    }
  }


  if(cnt == ans){
    ans = -1;
  }
  cout << ans << endl;

}
