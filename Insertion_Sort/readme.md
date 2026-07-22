# Insertion Sort in C

This repository contains the implementation of the **Insertion Sort** algorithm in the C programming language. The program sorts an array in ascending order using the insertion sort technique.

## 📌 About Insertion Sort

Insertion Sort is a simple comparison-based sorting algorithm. It builds the sorted array one element at a time by taking each element from the unsorted portion and inserting it into its correct position in the sorted portion.

## 🚀 Algorithm

1. Assume the first element is already sorted.
2. Pick the next element as the **key**.
3. Compare the key with the elements before it.
4. Shift all larger elements one position to the right.
5. Insert the key into its correct position.
6. Repeat until all elements are sorted.

## 💻 Technologies Used

- C Programming Language
- GCC Compiler (or any standard C compiler)

## 📂 File Structure

```
Insertion-Sort/
│
├── insertion_sort.c
└── README.md
```

## ▶️ Sample Input

```
Enter the number of elements: 5
Enter the elements:
5 2 4 6 1
```

## ✅ Sample Output

```
Sorted Array:
1 2 4 5 6
```

## ⏱️ Time Complexity

| Case | Complexity |
|------|------------|
| Best Case | O(n) |
| Average Case | O(n²) |
| Worst Case | O(n²) |

## 💾 Space Complexity

- **O(1)** (In-place sorting algorithm)

## ✅ Features

- Easy to understand
- Stable sorting algorithm
- In-place sorting
- Suitable for small datasets
- Simple implementation in C

## 👨‍💻 Author

**Shitanshu Jha**

Learning Data Structures and Algorithms using C.
