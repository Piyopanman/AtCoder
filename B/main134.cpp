//abc134 B

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;
    int num = 1 + D * 2;
    int ans = N / num;
    if(N % num == 0){
        cout << ans << endl;
    }else{
        cout << ans + 1 << endl;
    }
}
