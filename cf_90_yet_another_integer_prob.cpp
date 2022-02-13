#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int a,b,diff;
        cin>>a>>b;
        if(a==b){
            cout<<0<<"\n";
        }
        else{
            int count=0;
        diff=abs(a-b);
        for(int i=0;i<10;i++){
           int  k=10-i;
            while(diff>=k){
                diff-=k;
                count+=1;
                if (diff==0)
                {
                    cout<<count<<"\n";
                    count=0;
                    break;
                }
            }
        }
        }
    }
        return 0;
}