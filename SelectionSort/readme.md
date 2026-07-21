# Selection Sort in Java

## Overview

Selection Sort is a simple comparison-based sorting algorithm. It repeatedly finds the smallest element from the unsorted portion of the array and places it at the beginning. The process continues until the entire array is sorted.

---

## How It Works

1. Assume the first element is the minimum.
2. Compare it with the remaining elements.
3. Find the smallest element in the unsorted part.
4. Swap it with the first unsorted element.
5. Move the boundary of the sorted portion one step forward.
6. Repeat until the array is completely sorted.

---

## Algorithm

1. Traverse the array from index `0` to `n - 2`.
2. Store the current index as `minIndex`.
3. Compare the current element with the remaining elements.
4. Update `minIndex` if a smaller element is found.
5. Swap the current element with the minimum element.
6. Continue for all remaining positions.

---

## Time Complexity

| Case | Complexity |
|------|------------|
| Best Case | O(n²) |
| Average Case | O(n²) |
| Worst Case | O(n²) |

---

## Space Complexity

- **O(1)** (In-place Sorting)

---

## Characteristics

- Comparison-based sorting algorithm
- In-place algorithm
- Not Stable (by default)
- Simple to understand and implement
- Performs minimum number of swaps

---

## Advantages

- Easy to implement
- Requires constant extra memory
- Good for small datasets
- Fewer swaps compared to Bubble Sort

---

## Disadvantages

- Poor performance on large datasets
- Time complexity remains O(n²) in all cases
- Not suitable for real-world large-scale applications

---

## Concepts Used

- Arrays
- Nested Loops
- Swapping
- Minimum Element Selection
- In-place Sorting

---

## Language

- Java
