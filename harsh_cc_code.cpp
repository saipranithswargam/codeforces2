#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    int n,x;
    while(t--){
        cin>>n>>x;
        int arr[n],sum=0;
        for( int i=0; i<n; i++){
            cin>>arr[i];
            sum=sum+arr[i];
        }
        if(x>sum){cout<<-1<<'\n';continue;}
        sort(arr,arr+n,greater<int>());
        int ans=0;
        for( int i= 0;i<n ;i++){
            ans=ans+arr[i];
            if(ans>=x){cout<<i+1<<'\n';break;}
        }
    }
 
    return 0;
}