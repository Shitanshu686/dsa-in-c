#include <stdio.h>

// Function to print the elements of the array
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

// Function to merge two sorted sub-arrays into one
void merge(int A[], int mid, int low, int high)
{
    int i, j, k, B[100];
    i = low;     // Starting index for left sub-array
    j = mid + 1; // Starting index for right sub-array
    k = low;     // Starting index for temporary array B

    // Compare elements from both sub-arrays and copy the smaller one to B
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }

    // Copy remaining elements of left sub-array, if any
    while (i <= mid)
    {
        B[k] = A[i];
        i++;
        k++;
    }

    // Copy remaining elements of right sub-array, if any
    while (j <= high)
    {
        B[k] = A[j];
        j++;
        k++;
    }

    // Copy sorted elements from temporary array B back to original array A
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}

// Recursive function to divide and sort the array
void mergeSort(int A[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;      // Find the middle point
        mergeSort(A, low, mid);      // Sort the left half
        mergeSort(A, mid + 1, high); // Sort the right half
        merge(A, mid, low, high);    // Merge the sorted halves
    }
}

int main()
{
    // Unsorted array
    int A[] = {9, 14, 4, 8, 7, 5, 6};
    int n = 7; // Total number of elements

    printf("Before Sorting: ");
    printArray(A, n);

    // Call mergeSort from index 0 to n-1
    mergeSort(A, 0, n - 1);

    printf("After Sorting: ");
    printArray(A, n);

    return 0;
}
