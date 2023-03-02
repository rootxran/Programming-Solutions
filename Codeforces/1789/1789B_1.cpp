#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        bool possible = false;

        int num_zeros_left = 0, num_ones_left = 0;
        int num_zeros_right = 0, num_ones_right = 0;

        for (int i = 0, j = n - 1; i < j; i++, j--) {
            if (s[i] == '0') {
                num_zeros_left++;
            } else {
                num_ones_left++;
            }

            if (s[j] == '0') {
                num_zeros_right++;
            } else {
                num_ones_right++;
            }

            if (num_zeros_left == num_zeros_right || num_ones_left == num_ones_right) {
                possible = true;
                break;
            }
        }

        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
