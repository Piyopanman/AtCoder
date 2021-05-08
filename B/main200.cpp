//abc200 B

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    long long N, K;
    cin >> N >> K;
    for(int i=0 ; i<K ; i++){
        if(N % 200 == 0){
            N /= 200;
        }else{
            string n = to_string(N); //文字列に変換
            n += "200";
            N = stoll(n.c_str());  //long long型に変換
        }
    }
    cout << N <<endl;
}
