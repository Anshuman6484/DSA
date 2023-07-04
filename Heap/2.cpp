//Binary heap implementation

#include <bits/stdc++.h>
using namespace std;

class MinHeap
{
    public :
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
            return 2*i+1;
        }
        int right(int i)
        {
            return 2*i+2;
        }
        int parent(int i)
        {
            return (i-1)/2;
        }
        void insert(int x)
        {
            //Time complexity : O(logN)
            if(size==capacity)
                return;
            size++;
            arr[size-1]=x;
            for(int i=size-1;i!=0&&arr[parent(i)]>arr[i];)
            {
                swap(arr[i],arr[parent(i)]);
                i=parent(i);
            }
        }
        void print()
        {
            for(int i=0;i<size;i++)
                cout<<arr[i]<<' ';
        }
};

int main()
{
    int c,size;
    cin>>c>>size;
    MinHeap myheap(c);
    for(int i=0;i<size;i++)
    {
        int x;
        cin>>x;
        myheap.insert(x);
    }
    int x;
    cin>>x;
    myheap.insert(x);
    myheap.print();
    return 0;
}