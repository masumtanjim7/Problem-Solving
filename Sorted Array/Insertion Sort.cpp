#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the unsorted elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for (int i=0;i<n;i++){
        int current = arr[i];
        int j=i-1;
        while(arr[j]>current){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    cout<<"Here is the Sorted elements : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;

}
