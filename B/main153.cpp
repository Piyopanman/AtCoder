//abc153

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int h, n;
    string ans = "No";
    cin >> h >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        h -= a;
        if (h <= 0)
        {
            ans = "Yes";
        }
    }
    cout << ans << endl;
}
