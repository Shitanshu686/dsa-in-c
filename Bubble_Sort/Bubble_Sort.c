#include <stdio.h>

// एरे प्रिंट करने का फंक्शन
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

// बबल सॉर्ट का फंक्शन
void bubbleSort(int *A, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    { // नंबर ऑफ़ पास (Passes)
        for (int j = 0; j < n - 1 - i; j++)
        { // कंपैरिजन (Comparisons)
            if (A[j] > A[j + 1])
            {
                // स्वाइप (Swapping)
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printf("Array before sorting: \n");
    printArray(A, n);

    bubbleSort(A, n); // सॉर्ट करने के लिए फंक्शन कॉल

    printf("Array after sorting: \n");
    printArray(A, n);
    return 0;
}
