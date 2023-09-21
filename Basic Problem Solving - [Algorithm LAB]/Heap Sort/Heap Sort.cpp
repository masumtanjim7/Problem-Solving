#include<bits/stdc++.h>
using namespace std;
void printArray(int a[], int n);
int last_parent(int a[], int n);
int max_heap(int a[], int i, int n);
int heapsort(int a[], int n);
int main()
{
    int n,a[100];
    cout<<"Array Size : ";
    cin>>n;
    for(int i=1;i<=n;i++)

        cin>>a[i];
    last_parent(a,n);
    heapsort(a,n);
    printArray(a,n);
    return 0;
}
void printArray(int a[], int n){
    for(int i=1;i<=  n;i++)
        cout<<a[i]<<" ";
    cout<<endl;

}
int last_parent(int a[], int n){

    for(int i=n/2;i>=1;i--){
        max_heap(a,i,n);
    }
}

int max_heap(int a[], int parent_index, int n){

    int left=2*parent_index;
    int right=2*parent_index+1;
    int largest;
    if(left<=n && a[left]>a[parent_index])
        largest=left;
    else
        largest=parent_index;

    if(right<=n && a[right]>a[largest])
        largest=right;

    if(largest!=parent_index){
        swap(a[parent_index],a[largest]);
        max_heap(a,largest,n);
    }
}

int heapsort(int a[], int n){
    int total=n;
    for(int i=n;i>=1;i--){
        swap(a[1],a[i]);
        total--;
        max_heap(a,1,total);
    }

}

