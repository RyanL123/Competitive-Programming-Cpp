#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    long double n, m, k;
    cin >> n >> m;
    k = ceil(ceil(log2(n))/m);
    cout << k;
}