#include<iostream>
using namespace std;


bool so_doi_xung(long long x) {
    string s = to_string(x);
    char first_digit = s[0];
    for (char c : s) {
        if (c != first_digit) {
            return false;
        }
    }
    return true;
}

int main() {
    long long n, m = 0;
    cin >> n;
    if (n < 10) {
        m = 11 - n;
    } else {
        if (so_doi_xung(n)) {
            m = 0;
        } else {
            long long so_doi_xung_ = n + 1;
            while (true) {
                if (so_doi_xung(so_doi_xung_)) {
                    m = so_doi_xung_ - n;
                    break;
                }
                so_doi_xung_++;
            }
        }
    }
    cout << m;
}
