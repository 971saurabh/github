#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll l, r;
    cin >> l >> r;
    l--, r--;
    string s = "atcoder";
    string ans = s.substr(l, (r - l + 1));
    cout << ans;
    return 0;
}