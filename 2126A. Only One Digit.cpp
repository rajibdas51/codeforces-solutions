#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
      int min_digit=9;
      int x;
      cin>>x;
      while(x>0){
        min_digit =min(min_digit, (x%10));
        if (min_digit==0) break;
        x/=10;

      }
      cout<<min_digit<<endl;
    }
    
    return 0;
}