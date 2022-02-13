#include <stdio.h>
//q1 (a)

int isprime(int a){
    for(int i=2;i<a;i++){
        if(a%i==0){
            return 0;
        }
        else{
            continue;
        }
    }
    return 1;
}
void allprime(int n,int x){
    int count;
    for(int i=x;count!=n;i++){
        if(isprime(i)){
            if(i!=1){
            printf("%d\n",i);
            count+=1;
            }

        }
    }
}
int main(){
    int n,x;
    printf("enter the x :");
    scanf("%d",&x);
    printf("enter n:");
    scanf("%d",&n);
    allprime(n,x);
    return 0;
}