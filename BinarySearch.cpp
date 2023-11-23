
#include <iostream>

#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// BINARY SEARCH
// Time Complexity: O(log n)

void print(vector<int> arr, int s, int m, int e) {
  for (int i = 0; i < arr.size(); i++) {cout << arr[i] << " ";}cout << endl;
  cout << "start: " << s << " middle: " << arr[m] << " end: " << e << endl;
}
int firstAndLastPos(vector<int> arr, int trgt, bool a) {
  int start = 0;
  int end = arr.size() - 1;
  int ans = -1;
  while (start <= end) {
    int middle = start + (end - start) / 2;
    print(arr, start, middle, end);

    if (arr[middle] < trgt) {
      start = middle + 1;
    } else if (arr[middle] > trgt) {
      end = middle - 1;
    } else {
      ans = middle;
      if (a) {
        end = middle - 1;
      } else if (!a) {
        start = middle + 1;
      }
    }
  }
  return ans;
}
int binarySearchCeiling(vector<int> arr, int trgt) {
  int start = 0;
  int end = arr.size() - 1;
  while (start <= end) {
    int middle = start + (end - start) / 2;
    print(arr, start, middle, end);
    if (arr[middle] < trgt) {
      start = middle + 1;
    } else if (arr[middle] > trgt) {
      end = middle - 1;
    } else {
      return arr[middle];
    }
  }
  return arr[start];
}
int main(){return 1;}