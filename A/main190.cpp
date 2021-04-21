//abc190 a

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    string ans;
    if(C == 0){
        while(1){
            A--;
            if(A == -1){
                ans = "Aoki";
                break;
            }
            B--;
            if(B == -1){
                ans = "Takahashi";
                break;
            }
        }
    }else{
        while(1){
            B--;
            if(B == -1){
                ans = "Takahashi";
                break;
            }
            A--;
            if(A == -1){
                ans = "Aoki";
                break;
            }
        }
    }
    cout << ans << endl;
}
