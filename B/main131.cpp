//abc131 B

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int N, L;
    cin >> N >> L;
    int exptected_taste = 0;
    vector<int> taste_array(N);
    for(int i = 1; i <= N; i++){
        exptected_taste += L + i - 1;
        taste_array[i-1] = L + i - 1;
    }
    int min_diff = 10000;
    int ans;
    for(int i = 0; i < N; i++){
        int taste = exptected_taste - taste_array[i];
        if(abs(exptected_taste - taste) < min_diff){
            min_diff = abs(exptected_taste - taste);
            ans = taste;
        }
    }
    cout << ans << endl;
}
