#include <bits/stdc++.h>
using namespace std;
int main(){
    int test,n,k;
    cin>>test;
    for(int i=0;i<test;i++){
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int k[n]=a[n];
        cout<<k[0]<<" "<<k[1]<<" "<<k[3]<<endl;
    }
return 0;
}