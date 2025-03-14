#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
    string s;
    int fh=0,sh=0;
    cin>>s;
    for (int i=0; i<=5; ++i){
        if(i<=2){
           fh+= s[i]-'0';
        }
        if(i>2){
            sh+= s[i]-'0';
        }
    }
    if(fh== sh){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
 }

}
