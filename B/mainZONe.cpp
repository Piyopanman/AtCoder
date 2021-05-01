//ZONe B

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    double N,D,H;
    cin >> N >> D >> H;
    double ufo = H/D;
    double max_katamuki = 0;
    double max_d=0, max_h=0;
    for(int i=0 ; i<N ; i++){
        double d,h;
        cin >> d >> h;
        if ( h/d > max_katamuki){
            max_katamuki = h/d;
            max_d = d;
            max_h = h;
        }
    }

    double katamuki = (H - max_h) / (D - max_d);
    double ans = H - katamuki * D;
    if(max_katamuki <= ufo){
        cout << 0 << endl;
    }else{
        cout << fixed << setprecision(5) << ans << endl;
    }

}
