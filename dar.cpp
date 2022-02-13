#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int cases;
    cin>>cases;
    int rows,col,r,c;
    for (int i = 0; i < cases; i++)
    {
        int counter=0,check=0,counter01=0;
        cin>>rows>>col>>r>>c;
        char arr[rows][col];

        for (int m = 0; m < rows; m++) //Taking the input for the cases
        {
            for (int n = 0; n < col; n++)
            {
                cin>>arr[m][n]; // Taking the input
                if (arr[m][n]=='B') // for no cases of B 
                   { counter++;
                   
                   }
            }
        }

        if (counter==0) //For the case when we cant do anything 
        {
            cout<<-1<<"\n";
            continue;
        }

        for (int m = 0; m < rows; m++) // for initialised
        {
            for (int n = 0; n < col; n++)
            {
                if ((m==r-1) && (n==c-1) && (arr[m][n]=='B')) 
                    counter01++;
            }
        }
        if (counter01==1)
        {
            cout<<0<<"\n";
            continue;
        }

        for (int p = 0; p <=col; p++) //row fix and col check
        {
            if (arr[r-1][p]=='B') //row fix and col check
                check=1;
            // if (arr[p][c-1]=='B') //col fix and row check
            //     check++;
        }
        for (int p = 0; p <=col; p++) //row fix and col check
        {
            if (arr[p][c-1]=='B') //col fix and row check
                check=1;

        }


        if (check==0)
            cout<<2<<"\n";
        else
            cout<<1<<"\n";
    }
    
    return 0;


}