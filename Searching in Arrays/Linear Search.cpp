#include<iostream>
using namespace std;


int linearSearch(int arr[], int n, int key){

     for (int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
     }
      return -1;
}

int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the Unsorted elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Which Element you Want to Search : ";
    cin>>key;


   cout<<"Your element is in -> "<<linearSearch(arr,n,key)<<"'th index"<<endl;

return 0;
}
