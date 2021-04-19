//abc190 b

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int n,s,d;
    cin >> n >> s >> d;
    vector<int> x(n), y(n);
    string ans = "No";
    for(int i=0 ; i<n ; i++){
        cin >> x[i] >> y[i];
        if(x[i] < s && y[i] > d){
            ans = "Yes";
            break;
        }
    }
    cout << ans << endl;
}
