//abc187 b

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> x(n), y(n);
    int ans = 0;
    for(int i=0 ; i<n ; i++){
        cin >> x[i] >> y[i];
    }
    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1 ; j<n ; j++){
            double tilt = (y[i] - y[j]) / (x[i] - x[j]);
            if(abs(tilt) <= 1.0){
                ans++;
            }
        }
    }
    cout << ans << endl;
}
