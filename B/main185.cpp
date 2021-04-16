//abc185 b

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int n,m,t;
    cin >> n >> m >> t;
    int last_time = 0;
    int max = n;
    string ans = "Yes";
    for(int i=0 ; i<m ; i++){
        int a,b;
        cin >> a >> b;
        n -= a-last_time;
        if(n < 1){
            ans = "No";
        }
        if(n + b - a <= max){
            n += b - a;
        }else{
            n = max;
        }
        last_time = b;
        if(i == m-1){
            n -= t - b;
            if(n < 1){
                ans = "No";
            }
        }
    }
    
    cout << ans << endl;
}
