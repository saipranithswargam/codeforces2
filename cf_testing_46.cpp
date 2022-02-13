#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL); 
    long long n,k;
    cin>>n>>k;
    if(n%2==0){
        if((n/2)<k){
            cout<<2*k-1;
            return 0;
            }
        //     lon*g long mid=n/2,run=k-mid;
        //     while(run>0){
        //         for(long long i=1;i<n;i++){
        //             if(i%2==0){
        //                 run--;
        //                 if(run==0){
        //                     cout<<i;
        //                     return 0;
        //                 }
        //             }
        //         }
        //     }

        // }
        else if(n/2>=k){
            cout<<((n/2)-k)*2;
            return 0;
            }
            // long long mid=n/2;
        //     while(k>0){
        //         for(long long i=1;i<n;i++){
                
        //         if(i%2!=0){
        //             k--;
        //             if(k==0){
        //                 cout<<i;
        //                 return 0;
        //             }
        //         }
        //     }
        //     }

        // }

    } 
    else if(n%2!=0){
        if((n+1)/2<k){
            cout<<2*k-1;
            return 0;
            }
    
        //     // long long mid=(n+1)/2,run=k-mid;
        //     // while(run>0){
        //     //     for(long long i=1;i<n;i++){
        //     //         if(i%2==0){
        //     //             run--;
        //     //             if(run==0){
        //     //                 cout<<i;
        //                     return 0;
        //                 }
        //             }
        //         }
        //     }
        // }
        else if((n+1)/2>=k){
            cout<<(((n+1)/2)-1)*2;
        }


    
        }
}

            // long long mid=(n+1)/2;
//             while(k>0){
//                 for(long long i=1;i<n;i++){
//                     if(i%2!=0){
//                         k--;
//                         if(k==0){
//                             cout<<i;
//                             return 0;
//                         }
//                     }
//                 }
//             }
//         }
//     }
// }
