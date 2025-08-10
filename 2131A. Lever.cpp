#include<bits/stdc++.h>
using namespace std;

int main() {

    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n), b(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int total_excess = 0;
        int total_deficit = 0;
        
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) {
                total_excess += (a[i] - b[i]);
            } else if (a[i] < b[i]) {
                total_deficit += (b[i] - a[i]);
            }
        }
        
      
        int totalit = total_excess;
        if (total_deficit > total_excess) {
            totalit++;
        }
        
        cout << totalit << "\n";
    }
    
    return 0;
}