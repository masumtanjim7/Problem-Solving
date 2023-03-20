#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
      int s=0;
      int e=n;
      while(s<=e){
        int mid=(s+e)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if (arr[mid]>key){
           e=mid-1;
        }
        else{
            s=mid+1;
        }
      }
}

int main()
{
   int n;
    cout<<"Enter the number of elements : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the Sorted elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Which Element you Want to Search : ";
    cin>>key;

    cout<<"Your element is in -> "<<binarySearch(arr,n,key)<<"'th index"<<endl;
return 0;
}
