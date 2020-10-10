//HHKB B

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int h,w;
  int count = 0;
  cin >> h >> w;
  std::vector<vector<char>> v(h,vector<char>(w));
  string s;
  for(int i=0 ; i<h ; i++){
    cin >> s;
    int cou = 0;
    for (char c : s) {
      v[i][cou] = c;
      cou++;
    }
  }



 for(int i=0 ; i<h ; i++){
   for(int j=0 ; j<w ; j++){
     cin >> v[i][j] ;
   }
 }



//横並びを調べる
 for(int i=0 ; i<h ; i++){
   for(int j=0 ; j<w-1 ; j++){

     if(v[i][j] == '.' && v[i][j+1]== '.'){
       count++;
     }

   }
 }

 //縦並び
 for(int i=0 ; i<w ; i++){
   for(int j=0 ; j<h-1 ; j++){
     if(v[j][i] == '.' && v[j+1][i] == '.'){
       count++;
     }
   }
 }






cout << count << endl;
}
