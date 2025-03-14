#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
   int n;
   cin>>n;
   int arr[n];
   int result;
   for(int i=0; i<n; ++i){
    cin>>arr[i];
   }
    for(int i=0; i<n; ++i){
     if(i==0 && arr[i]!= arr[i+1] && arr[i]!= arr[i+2]){
        cout<<"1"<<endl;
        break;
     }
    else if(i!=0 && arr[i]!=arr[i-1] && arr[i]!=arr[i+1]){
        cout<<i+1<<endl;
        break;
     }
     else if(i == n-1){
        cout <<i+1<<endl;
        break;
     }

   }
}



}
