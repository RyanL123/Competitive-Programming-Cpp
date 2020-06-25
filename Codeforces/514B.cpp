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
    int n;
    ld x0, y0;
    map<ld, int> slope;
    cin >> n >> x0 >> y0;
    for (int i = 0; i < n; i++){
        ld x, y;
        cin >> x >> y;
        ld s;
        if (x == x0) s = inf;
        else s = (y-y0)/(x-x0);
        slope[s]++;
    }
    cout << slope.size() << '\n';
}