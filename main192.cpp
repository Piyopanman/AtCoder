//abc192 b

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    bool ans = true;
    for(int i=0 ; i<S.size() ; i++){
        if(i % 2 == 0 && !islower(S[i])){
            ans = false;
            break;
        }else if(i % 2 == 1 && !isupper(S[i])){
            ans = false;
            break;
        }
    }

    if(ans){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
