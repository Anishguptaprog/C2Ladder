#include <bits/stdc++.h>
 
using namespace std;
 
bool palindrome(const string &s) {
    int n = s.length();
    for(int i = 0; i < n; i++) {
        if(s[i] != s[n - i - 1]) return false;
    }
    return true;
}
 
int main() {
    int t;
    cin >> t;
    while(t--) 
	{
        string s;
        cin >> s;
        if(!palindrome(s + 'a')) {
            cout << "YES\n" << s << 'a' << "\n";
        }else if(!palindrome('a' + s)) {
            cout << "YES\n" << 'a' << s << '\n';
        }else {
            cout << "NO\n";
        }
    }
}
