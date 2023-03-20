#include <iostream>
#include"Array Mergesort.h"
using namespace std;


int main()
{
    int size;
    cout<<"Enter Size of Elements : ";
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
