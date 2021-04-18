//abc187 a

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin >> a >> b;
    int a_sum = 0, b_sum = 0;
    for(int i=0 ; i<a.size() ; i++){;
        a_sum += a[i] - '0';
    }
    for(int i=0 ; i<b.size() ; i++){
        b_sum += b[i]-'0';
    }
    if(a_sum >= b_sum){
        cout << a_sum << endl;
    }else{
        cout << b_sum << endl;
    }
}
