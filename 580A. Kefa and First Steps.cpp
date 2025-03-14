#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n,t(1),ml(1);
    cin>>n;
    int ar[n];
    for(int i=0; i<n; ++i){
        cin>>ar[i];
        if(i>0){
            if(ar[i]>=ar[i-1]){
                t++;
                ml= max(ml,t);
            }
            else{
                t=1;
            }
        }

    }

    cout<<ml<<endl;

}
