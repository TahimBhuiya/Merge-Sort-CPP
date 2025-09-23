#include <iostream>
using namespace std;

// Function to merge two sorted subarrays into one sorted array
void merge(int arr[], int left, int mid, int right) {
    // Find the sizes of two subarrays to merge
    int n1 = mid - left + 1; // size of left subarray
    int n2 = right - mid;    // size of right subarray

    // Create temporary arrays
    int *L = new int[n1];
    int *R = new int[n2];


    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];


    // Merge the temporary arrays back into arr[left..right]
    int i = 0; // Initial index of first subarray

    int j = 0; // Initial index of second subarray
    int k = left; // Initial index of merged subarray

        while (i < n1 && j < n2) {

        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
}