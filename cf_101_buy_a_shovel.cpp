#include <bits/stdc++.h>
using namespace std;
int main(){
    int price,ch;
    cin>>price>>ch;
   int rem=price%10;
    int i=1;
    for(int i=1 ;i<10;i++){
        if( ((rem*i)%10)==ch){
            cout<<i<<"\n";
            return 0;
        }
    }
    // while(chek(rem,ch)){
    //     if(price%10==ch){
    //         cout<<i<<"\n";
    //         return 0;

    //     }
    //     else{
    //         i++;
    //         price=price*i;
    //     }

    
    while(true){
        if(price%10==0){
            cout<<i<<"\n";
            return 0;
        }
        else{
            i++;
            price=price*i;
        }
    }

}