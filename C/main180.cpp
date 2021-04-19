//abc180 c

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    long N;
    cin >> N;
    set<long> ans;
    for(long i=1 ; i*i <= N ; ++i){
        if(N % i == 0){
            ans.insert(i);
            ans.insert(N / i);
        }
    }

    for(auto x:ans) cout << x << endl;
}
