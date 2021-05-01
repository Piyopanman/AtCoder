//ZONe A

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    int count = 0;
    for(int i=0 ; i<S.size()-3 ; i++){
        if(S[i]=='Z' && S[i+1]=='O' && S[i+2]=='N' && S[i+3]=='e'){
            count++;
        }
    }
    cout << count << endl;
}
