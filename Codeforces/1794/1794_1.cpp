#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool is_palindrome(string s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> prefixes, suffixes;
        for (int i = 0; i < 2 * n - 2; i++) {
            string s;
            cin >> s;
            if (s.length() == n - 1) {
                suffixes.push_back(s);
            } else {
                prefixes.push_back(s);
            }
        }

        string candidate;
        for (string p : prefixes) {
            for (string s : suffixes) {
                if (p == s) {
                    // ignore identical prefixes and suffixes
                    continue;
                }
                int common_len = min(p.length(), s.length());
                if (p.substr(0, common_len) == s.substr(s.length() - common_len)) {
                    // p is a prefix of s
                    string c = s + p.substr(common_len);
                    if (candidate.empty() || c.length() > candidate.length()) {
                        candidate = c;
                    }
                } else if (p.substr(p.length() - common_len) == s.substr(0, common_len)) {
                    // s is a prefix of p
                    string c = p + s.substr(common_len);
                    if (candidate.empty() || c.length() > candidate.length()) {
                        candidate = c;
                    }
                }
            }
        }

        if (is_palindrome(candidate)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
