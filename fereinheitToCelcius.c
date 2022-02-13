#include <stdio.h>
void main(){
    int temp;
    printf("enter the temp in feirhenheit:");
    scanf("%d",&temp);
    float c;
    c=(5/9.0)*(temp-32);
    printf("%.2f",c);//%.2f is is used for taking precison to 2
    

}