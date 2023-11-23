
#include <iostream>

#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// BINARY SEARCH
// Time Complexity: O(log n)

//_______________Sort Algorithms________________________
bool isSorted(const std::vector<int>& arr) {
    for (size_t i = 0; i < arr.size() - 1; ++i) {if (arr[i] > arr[i + 1])   return false; }
    return true; 
}
void printArr(vector<int> &arr) {
  for (int i = 0; i < arr.size(); i++) {cout << arr[i] << " ";}cout << endl;}

//Time Complexity big O(n^2)
vector<int> BubbleSort(vector<int> arr){    // assending order
  while(isSorted(arr) != true){  
    for(int i = 0; i < arr.size()-1; i++){if(arr[i] > arr[i+1]){
      int temp=arr[i+1];
      arr[i+1] = arr[i];
      arr[i] = temp;}}}
  return arr;
}


void Merge(vector<int> &arr, int left, int middle, int right){

      int n1 = middle - left + 1;  // Calculate sizes of two temporary arrays
      int n2 = right - middle;

      std::vector<int> L(n1), R(n2);  // Create temporary arrays L[] and R[]

      // Copy data to temporary arrays L[] and R[]
      for (int i = 0; i < n1; ++i) {
          L[i] = arr[left + i];  // Copy elements to the left subarray
      }
      for (int j = 0; j < n2; ++j) {
          R[j] = arr[middle + 1 + j];  // Copy elements to the right subarray
      }
  
      // Merge the temporary arrays back into arr[left..right]
      int i = 0, j = 0, k = left;
      while (i < n1 && j < n2) {
          if (L[i] <= R[j]) {
              arr[k] = L[i];  // Choose the smaller element and put it in arr[]
              ++i;
          } else {
              arr[k] = R[j];
              ++j;
          }
          ++k;
      }

      // Copy the remaining elements of L[], if any
      while (i < n1) {
          arr[k] = L[i];
          ++i;
          ++k;
      }

      // Copy the remaining elements of R[], if any
      while (j < n2) {
          arr[k] = R[j];
          ++j;
          ++k;
      }
  }



void MergeSort(vector<int> &arr, int left, int right){
   
  if(left < right){
    //for (int i = left; i <= right; i++) {cout << arr[i] << " ";}cout << endl;
    int mid = (left + right) / 2;
 
    MergeSort(arr, left, mid);
    MergeSort(arr, mid+1, right);

    Merge(arr, left, mid, right);
  }
  
  
}    // assending order
  
   

void quickSort(){}
void heapSort(){}









int main() {
  // char a = 'z'; char b = 'b';

  vector<int> array = {9,7,3,6,2};
  vector<char> arr = {'a', 'f', 'h', 'm'};
  // if(a<b){cout<<a;}
  // else{cout<<b;}
// printArr(BubbleSort(array));
  MergeSort(array, 0, array.size()-1);
  printArr(array);

  return 0;
}