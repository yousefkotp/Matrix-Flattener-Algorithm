//very helpful resource: shorturl.at/lmzX1
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    //n & m & p are the sizes of our 3*3*3 matrix
    //N = HEIGHT, M = WIDTH, P = DEPTH
    int n=2,m=3,p=4;
    //n -> number of rows (x-axis)
    //m -> number of columns (y-axis)
    //p -> depth of the matrix (z-axis)

    //the array where we will flatten the matrix into
    vector<int>v(n*m*p);
    int test [n][m][p] = {
                            { {1,2,3,4},        {5,6,7,8},          {9,10,11,12} },
                            { {13,14,15,16},    {17,18,19,20},      {21,22,23,24} }
                        };

    int index=0;                    //index for the vector

    //flattening into the vector in row major
    for(int k= 0;k<p;k++)
        for(int j=0;j<m;j++)
            for(int i=0;i<n;i++)
                v[index++]=test[i][j][k];

    while(true){

        //accessing the vector from 3 indices
        cout<<"Enter the element you want to access indexed in i & j & k: (1-indexed)"<<endl;
        int i,j,k;
        cin>>i>>j>>k;

        //decrementing them to be zero indexed
        i--;
        j--;
        k--;

        // our formula is i + ( j * HEIGHT ) + ( k * HEIGHT * WIDTH )
        int x = i + (j*n) + (k*n*m);
        cout<<"The vector of indices "<<i+1<<" "<<j+1<<" "<<k+1<<" is: "<<v[x] <<endl;
    }


    return 0;
}
