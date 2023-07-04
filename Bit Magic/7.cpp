// Count set bits

#include <bits/stdc++.h>
using namespace std;

int count_bits(int n)
{
    int count = 0;
    /*
    for (int i = 0; n != 0; i++)
    {
        count += n & 1;
        // if ((n & 1) == 1)
        //     count++;
        n = n >> 1;
    }
    */
    // Brian Kerningam's Algorithm
    while (n != 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    cout << count_bits(n);
    return 0;
}