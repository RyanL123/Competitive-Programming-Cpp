#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;
typedef vector<pair<int, int>> vii;
typedef vector<int> vi;
typedef long double ld;
typedef long long ll;
typedef unsigned long long ull;
#define pb(x) push_back(x)
#define mp(a, b) make_pair(a, b)
#define srt(x) sort(x.begin(), x.end())
#define inf 0x3f3f3f3f

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        int lo = (a-b)*n, hi = (a+b)*n;
        if (hi < c-d || lo > c+d) cout << "No\n";
        else cout << "Yes\n";
    }
}