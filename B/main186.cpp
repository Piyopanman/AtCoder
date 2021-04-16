//abc186 b

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int h,w;
    cin >> h >> w;
    vector<int>a(h * w);
    int min = 101;
    long ans = 0;
    for(int i=0 ; i<h*w ; i++){
        cin >> a[i];
        if(a[i] < min){
            min = a[i];
        }
    }
    for(int i=0 ; i<h*w ; i++){
        ans += a[i] - min;
    }

    cout << ans << endl;
}
