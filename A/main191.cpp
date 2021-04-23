//abc191 a

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    double V,T,S,D;
    cin >> V >> T >> S >> D;
    double reach_time = D / V;
    if(reach_time >= T && reach_time <= S){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
}
