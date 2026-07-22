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

// Function to perform Insertion Sort
void insertionSort(int *A, int n)
{
    int key, j;
    // Loop for passes (starts from index 1 to n-1)
    for (int i = 1; i <= n - 1; i++)
    {
        key = A[i]; // The element to be inserted into the sorted sub-array
        j = i - 1;  // Index of the element just before the key

        // Move elements of A[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j]; // Shift element to the right
            j--;             // Move to the previous index
        }
        A[j + 1] = key; // Insert the key at its correct position
    }
}

int main()
{
    // Unsorted array initialization
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = sizeof(A) / sizeof(int); // Calculate total number of elements

    printf("Running Insertion Sort...\n");
    printf("Array before sorting: ");
    printArray(A, n);

    insertionSort(A, n);

    printf("Array after sorting:  ");
    printArray(A, n);

    return 0;
}
