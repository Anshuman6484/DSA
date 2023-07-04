// Binary Heap(Heapify and Extract)

// Binary heap implementation

#include <bits/stdc++.h>
using namespace std;

class MinHeap
{
public:
    int *arr;
    int size;
    int capacity;
    MinHeap(int c)
    {
        arr = new int[c];
        size = 0;
        capacity = c;
    }
    int left(int i)
    {
        return 2 * i + 1;
    }
    int right(int i)
    {
        return 2 * i + 2;
    }
    int parent(int i)
    {
        return (i - 1) / 2;
    }
    void insertarr(int n)
    {
        for (int i = 0; i < n; i++)
            cin >> arr[i];
    }
    void insertheap(int x)
    {
        // Time complexity : O(logN)
        if (size == capacity)
            return;
        size++;
        arr[size - 1] = x;
        for (int i = size - 1; i != 0 && arr[parent(i)] > arr[i];)
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }
    void print()
    {
        for (int i = 0; i < size; i++)
            cout << arr[i] << ' ';
    }
    void minheapify(int i)
    {
        int lt = left(i), rt = right(i);
        int smallest = i;
        if (lt < size && arr[lt] < arr[i])
            smallest = lt;
        if (rt < size && arr[rt] < arr[smallest])
            smallest = rt;
        if (smallest != i)
        {
            swap(arr[i], arr[smallest]);
            minheapify(smallest);
        }
    }
};

int main()
{
    int c, size, i;
    cin >> c >> size >> i;
    MinHeap myheap(c);
    // for(int i=0;i<size;i++)
    // {
    //     int x;
    //     cin>>x;
    //     myheap.insert(x);
    // }
    myheap.insertarr(size);
    myheap.minheapify(i);
    myheap.print();
    return 0;
}