#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int m;
    cin >> m;
    while (m--) {
        int x, y;
        cin >> x >> y;
        int cnt = upper_bound(a.begin(), a.end(), y) - lower_bound(a.begin(), a.end(), x);
        cout << cnt << endl;
    }
    return 0;
}
