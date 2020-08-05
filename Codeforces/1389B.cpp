#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef vector<pair<int, int>> vii;
typedef vector<int> vi;
typedef long double ld;
typedef long long ll;
typedef unsigned long long ull;
#define eb emplace_back
#define pb push_back
#define mp make_pair
#define srt(x) sort(x.begin(), x.end())
#define all(x) x.begin(), x.end()
#define inf 0x3f3f3f3f

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, k, z;
        cin >> n >> k >> z;
        int a[n+1], psa[n+1];
        psa[0] = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            psa[i] = psa[i-1] + a[i];
        }
        int ans = 0;
        for (int i = 0; i <= z; i++) {
            int mx = k-2*i+1, cur = psa[mx], p = 0;
            if (mx <= 0) continue;
            for (int j = 1; j <= mx; j++) {
                p = max(p, a[j]+a[j+1]);
            }
            ans = max(ans, cur+p*i);
        }
        cout << ans << '\n';
    }
}