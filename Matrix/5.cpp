//Matrix in snake pattern

#include <bits/stdc++.h>
using namespace std;

const int R=4,C=4;

void printsnake(int mat[R][C])
{
    for(int i=0 ; i<R ; i++)
    {
        if(i%2==0)
        {
            for(int j=0 ; j<C ; j++)
                cout<<mat[i][j]<<' ';
        }
        else
        {
            for(int j=C-1 ; j>=0 ; j--)
                cout<<mat[i][j]<<' ';
        }
    }
}

int main()
{

    return 0;
}