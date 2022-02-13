#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int a,b,count;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
      string  k=to_string(i);
        int len=k.length();
        for(int j=0;j<len;j++){
            if((k[j]=='0')||(k[j]=='6')||(k[j]=='9')){
                count+=6;
            }
            else if(k[j]=='1'){
                count+=2;
            }
            else if(k[j]=='4'){
                count+=4;

            }
            else if(k[j]=='7'){
                count+=3;
            }
            else if(k[j]=='8'){
                count+=7;
            }
            else{
                count+=5;
            }
        }
        }


     
     
    cout<<count<<"\n";
    return 0;

}