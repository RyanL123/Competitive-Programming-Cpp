/*
ID: ryan.li2
TASK: test
LANG: C++
*/

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
    ofstream fout("test.out");
    ifstream fin("test.in");
    int a, b;
    fin >> a >> b;
    fout << a+b << "\n";
    return 0;
}