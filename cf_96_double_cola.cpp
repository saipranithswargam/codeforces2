#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0,i=0;
    while(n>=sum){
         i+=1;
         sum=5*pow(2,i)-5;
    }
    sum=5*pow(2,(i-1))-5;
    int diff=n-sum;
    int k=pow(2,i-1);
    if(diff>=1 && diff<=(k)){
        cout<<"Sheldon";
    }
    else if (diff>=(k+1) && diff<=2*k){
        cout<<"Leonard";
    }
    else if (diff>=(2*k+1) && diff<=3*k){
        cout<<"Penny";
    }
    else if(diff>=(3*k+1) && diff<=4*k){
        cout<<"Rajesh";
    }
    else{
        cout<<"Howard";
    }
    return 0;
}