//First circular tour

#include <bits/stdc++.h>
using namespace std;

int firstpetrolpump(int petrol[], int dist[], int n)
{
    int start = 0, curr_pet = 0;
    int prev_pet = 0;
    for (int i = 0; i < n; i++)
    {
        curr_pet += (petrol[i] - dist[i]);
        if (curr_pet < 0)
        {
            start = i + 1;
            prev_pet += curr_pet;
            curr_pet = 0;
        }
    }
    return ((curr_pet + prev_pet) >= 0) ? (start + 1) : -1;
}

int main()
{
    int n;
    cin >> n;
    int petrol[n], dist[n];
    for (int i = 0; i < n; i++)
        cin >> petrol[i];
    for (int i = 0; i < n; i++)
        cin >> dist[i];

    cout << firstpetrolpump(petrol, dist, n);
    return 0;
}