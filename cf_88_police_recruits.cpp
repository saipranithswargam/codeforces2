#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int n,count,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int test=1;
    for(int i=0;i<n;i++){
        if (a[i]>0){
                count+=a[i];
            }
        if (count>0 && a[i]<0){
            count-=1;
        } 
        else{
            if(a[i]<0){
            c+=1;
            }
        }
    }
    cout<<c<<"\n";
    return 0;
}