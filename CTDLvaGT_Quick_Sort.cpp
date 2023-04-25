#include<stdio.h>
#include<iostream>
using namespace std;
 
void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
  

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];  
    int left = low;   
    int right = high - 1; 
    while(true){
        while(left <= right && arr[left] < pivot) left++; 
        while(right >= left && arr[right] > pivot) right--; 
        if (left >= right) break; 
        swap(arr[left], arr[right]); 
        left++; 
        right--; 
    }
    swap(arr[left], arr[high]);
    return left; 
}
  

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int index = partition(arr, low, high);
  
        quickSort(arr, low, index - 1);
        quickSort(arr, index + 1, high);
    }
}
  
/* Hàm xu?t m?ng */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++){
        cout << arr[i];
        cout<<"\t";
      }
}
   
int main()
{
    int arr[] = {9, -3, 5, 2, 6, 8, -6, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
   
    cout<<"M?ng sau khi ðý?c s?p x?p: \n";
    printArray(arr, n);
   
    cout<<"\n---------------------------------------\n";
    cout<<"Chýõng tr?nh này ðý?c ðãng t?i Freetuts.net";
}
