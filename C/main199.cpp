//abc199 c

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int N, Q;
    string S;
    cin >> N >> S >> Q;

    for(int i=0 ; i<Q ; i++){
        int T, A, B;
        cin >> T >> A >> B;
        if(T == 1){
            char tmp = S[A-1];
            S[A-1] = S[B-1];
            S[B-1] = tmp;

        }else{
            string tmp = S.substr(0,N);
            S.erase(0,N);
            S += tmp;

        }

    }

    cout << S << endl;

}
