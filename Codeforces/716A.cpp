#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;
typedef vector<pair<int, int>> vii;
typedef vector<int> vi;
typedef long long ll;
typedef unsigned long long ull;
#define pb(x) push_back(x)
#define mp(a, b) make_pair(a, b)
#define inf 0x3f3f3f3f

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, c, prev, cnt = 1;
    cin >> n >> c >> prev;
    for (int i = 1; i < n; i++){
        int x;
        cin >> x;
        if (x - prev > c) cnt = 1;
        else cnt++;
        prev = x;
    }
    cout << cnt;
}
