# 🔗 Linked List in C

## 📌 Overview

This repository contains the implementation of **Linked List** in the C programming language.

A Linked List is a dynamic linear data structure where elements (nodes) are connected using pointers. Unlike arrays, linked lists do not require contiguous memory allocation, making insertion and deletion operations more efficient.

---

## 📚 Features

- Create a Linked List
- Traverse the Linked List
- Insert at Beginning
- Insert at End
- Insert at Specific Position
- Delete from Beginning
- Delete from End
- Delete from Specific Position
- Search an Element
- Count Total Nodes
- Display Linked List

---

## 🏗️ Node Structure

```c
struct Node
{
    int data;
    struct Node *next;
};
```

Each node consists of:

- **Data** → Stores the value.
- **Next Pointer** → Stores the address of the next node.

---

## ⚙️ Operations

### ➤ Insertion

- Insert at Beginning
- Insert at End
- Insert at Specific Position

### ➤ Deletion

- Delete from Beginning
- Delete from End
- Delete from Specific Position

### ➤ Traversal

Display all nodes from head to last node.

### ➤ Searching

Search a particular element in the linked list.

---

## 🧠 Time Complexity

| Operation | Time Complexity |
|------------|-----------------|
| Traversal | O(n) |
| Search | O(n) |
| Insert at Beginning | O(1) |
| Insert at End | O(n) |
| Insert at Position | O(n) |
| Delete at Beginning | O(1) |
| Delete at End | O(n) |
| Delete at Position | O(n) |

---

## 💾 Space Complexity

- **Overall:** O(n)

where **n** is the number of nodes.

---

## 🎯 Advantages

- Dynamic memory allocation
- Easy insertion and deletion
- No memory wastage due to fixed size
- Efficient memory utilization

---

## ⚠️ Disadvantages

- Extra memory required for pointers
- Sequential access only
- Slower than arrays for random access
- Pointer manipulation can be complex

---

## 📖 Concepts Used

- Structures
- Pointers
- Dynamic Memory Allocation (`malloc`, `free`)
- Functions
- Traversal
- Insertion
- Deletion
- Searching

---

## 🚀 Language

- C

---

## 📂 Author

**Shitanshu Jha**

BCA Student | Java Developer | DSA Enthusiast

---

⭐ If you found this project useful, don't forget to **Star** this repository.
