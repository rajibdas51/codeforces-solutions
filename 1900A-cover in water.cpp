#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        // Check for "..." pattern
        bool has_three_empty = false;
        for (int i = 0; i <= n-3; i++) {
            if (s[i] == '.' && s[i+1] == '.' && s[i+2] == '.') {
                has_three_empty = true;
                break;
            }
        }
        
        if (has_three_empty) {
            cout << 2 << endl;
        } else {
            int count = 0;
            int result = 0;
            
            for (int i = 0; i < n; i++) {
                if (s[i] == '.') {
                    count++;
                } else {
                    result += min(count, 2);
                    count = 0;
                }
            }
            
            if (count > 0) {
                result += min(count, 2);
            }
            
            cout << result << endl;
        }
    }
    
    return 0;
}