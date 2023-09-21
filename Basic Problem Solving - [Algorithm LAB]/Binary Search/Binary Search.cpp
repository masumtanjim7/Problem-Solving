#include<iostream>
using namespace std;

int binarySearch(int array[],int x, int low, int high)
{
    while (low<=high)
    {
        int mid = low+(high-low)/2;

        if (array[mid]==x)
            return mid;

        if (array[mid]<x)
            low=mid+1;
        else
            high=mid+1;
    }
    return -1;
}
int main()
{
    int m;
    cout<<"Enter number of Elements : ";
    cin>>m;

    int array[m];
    cout<<"Enter Sorted Elements : ";
    for(int i=0; i<m; i++)
    {
        cin>>array[i];
    }
    int x;
    cout<<"Which Element You want to find : ";
    cin>>x;
    int n = sizeof(array) / sizeof(array[0]);
    int result = binarySearch(array, x, 0, n - 1);
    if (result == -1)
        cout<<"Element Not found"<<endl;
    else
        cout<<"Element found at index : "<<result<<endl;
return 0;
}
