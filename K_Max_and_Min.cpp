#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int mn = a;
    int mx = a;

    mn = min(mn, b);
    mn = min(mn, c);

    mx = max(mx, b);
    mx = max(mx, c);

    cout << mn << " " << mx << endl;

    return 0;
}