#include <bits/stdc++.h>
using namespace std;


int main()
{ 
 int t;
 cin>>t;
 while(t--){
  int n,x,max_distance=0,return_distance=0, capacity;
    cin>>n>>x;
    int arr[n];
    for(int i=0; i<n; i++){
       cin>>arr[i];
    }

    max_distance = arr[0];
       for(int i = 1; i<n; i++){
         max_distance = max(max_distance, arr[i]- arr[i-1]);
     

      }
      max_distance = max(max_distance, x-arr[n-1]); 
      return_distance = (x-arr[n-1])*2;
      capacity = max(return_distance,max_distance );
   cout<<capacity<<endl;
      
    
  

}
}