#include<bits/stdc++.h>//this should be included fr setting precision
using namespace std;
int main(){
    cout<<setprecision(10);
    int n,l;
    cin>>n>>l;
    int pos[n];
    for(int i=0;i<n;i++){
        cin>>pos[i];
    }
    // int k= sizeof(pos) / sizeof(pos[0]);
    sort(pos, pos + n  );//sorting of array
    float diff[n+1]{0};
    for(int i=1;i<n;i++){
        int d;
        d=pos[i]-pos[i-1];
        diff[i-1]=(float)d/2;
        // diff[i]=d;
        // cout<<diff[i]<<endl;
    }
    int k=pos[0];
    diff[n-1]=k;
    // cout<<diff[n]<<endl;
    // diff.push_back(k);
    // sort(diff.begin(),diff.end());
    int m=l-pos[n-1];
    // cout<<diff[n+1];
    diff[n]=m;
    // sort(diff , diff + n+1);
    float Max=*max_element(diff, diff+n);
    cout<<Max<<endl;


    // for(int i=0;i<n;i++){
    //     cout<<diff[i]<<endl;
    // }

    return 0;
}