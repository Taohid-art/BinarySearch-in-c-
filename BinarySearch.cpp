#include <iostream>
using namespace std;


// Function to perform binary search
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = (left + right ) / 2;

        // Check if target is at mid
        if (arr[mid] == target)
            return mid;

        // If target is greater, ignore the left half
        if (arr[mid] < target)
            left = mid + 1;

        // If target is smaller, ignore the right half
        else
            right = mid - 1;
    }

    // If the element is not found, return -1
    return -1;
}


int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int terget;
    cout << "Enter the search value" << endl;
    cin>>terget;

   int result= binarySearch(arr, 0, n - 1,terget);  // Call mergeSort on the full array

    if(result== -1){
    cout << "index is not found" << endl;
    }else{
    cout << "index is " << result<< endl;
    }

    return 0;
}

