#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<0<<endl;
    }
    if(a>b ){
        int s = (a-b)%10==0 ? (a-b)/10:((a-b)/10)+1;
        cout << s<<endl;

    }
    else if(b>a){
        int s = (b-a)%10 == 0 ?(b-a)/10:((b-a)/10)+1;
        cout<<s <<endl;
    }

}
}
