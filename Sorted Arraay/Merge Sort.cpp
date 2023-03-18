#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r){

    int n1=mid-l+1;
    int n2=r-mid;

    int a[n1];
    int b[n2];

    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=l;

    while(i<n1 && j<n2){
         if(a[i]<b[j]){
            arr[k] = a[i];
            k++; i++;
         }
         else {
            arr[k]=b[j];
            k++; j++;
         }
    }

    while (i<n1){
        arr[k]=a[i];
        k++; i++;
    }
    while (i<n1){
        arr[k]=b[j];
        k++; j++;
    }
}

void show(int *arr, int size) {
 for (int i = 0; i < size; i++)
 std::cout << arr[i] << " ";
 std::cout << "\n";
}

void mergeSort(int arr[], int l, int r){
    if (l<r){
      int mid = (l+r)/2;
      mergeSort(arr,l,mid);
      mergeSort(arr,mid+1,r);

      merge(arr,l,mid,r);
    }
}

int main() {
 int size;
 std::cout << "Enter the number of elements : ";
 std::cin >> size;
 int *arr = new int[size];
 std::cout << "Enter the unsorted elements : ";
 for (int i = 0; i < size; ++i) {
 std::cin >> arr[i];
 }
 mergeSort(arr, 0, size - 1);
 std::cout << "Sorted array : ";
 show(arr, size);
 delete[] arr;
 return 0;
}
