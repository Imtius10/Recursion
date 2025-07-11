#include <bits/stdc++.h>
#define nl "\n"
#define pb push_back
using namespace std;

int cnt(int n) {
    if (n == 0) return 0;
    return cnt(n / 10) + 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    
    if (t == 0) {
        cout << 1 << nl;
    } else {
        cout << cnt(t) << nl;
    }

    return 0;
}
