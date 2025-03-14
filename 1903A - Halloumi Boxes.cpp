#include <bits/stdc++.h>
using namespace std;

void isSolvable(){
 int n,k;
 
 cin>>n>>k;
 int arr[n];
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
 if(n==k){
     cout<<"YES"<<endl;
     return;
 }
 if(k>1){
  cout<<"YES"<<endl;
  return;
 }
 if(k==1){
  if(is_sorted(arr,arr+n)){
   cout<<"YES"<<endl;
  }
  else{
   cout<<"NO"<<endl;
  }
  return;
 }

 
 
}

int main()
{ 
 int t,n,k;
 cin>>t;
 while(t--){
    isSolvable();
   
    
   }

}