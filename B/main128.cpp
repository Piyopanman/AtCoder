//abc128 B

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    vector<int> P(N);
    vector< pair<string, pair<int,int>> > X(N);

    for (int i = 0; i < N; i++){
        cin >> X[i].first >> X[i].second.first;
        X[i].second.second = i + 1;
        X[i].second.first *= -1;
    }
    sort(X.begin(), X.end());

    for(int i = 0; i < N; i++){
        cout << X[i].second.second << endl;
    }
}
