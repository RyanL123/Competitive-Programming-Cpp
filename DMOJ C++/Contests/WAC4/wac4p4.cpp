#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;
typedef vector<pair<int, int>> vii;
typedef vector<int> vi;
typedef long double ld;
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define mp make_pair
#define srt(x) sort(x.begin(), x.end())
#define inf 0x3f3f3f3f

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    string a;
    for (int i = 1; i <= 1000; i++){
        a += to_string(i);
    }
    for (int i = 0; i < a.length(); i++){
        if (a.substr(i, s.length()) == s){
            cout << i+1 << "\n";
            return 0;
        }
    }
}