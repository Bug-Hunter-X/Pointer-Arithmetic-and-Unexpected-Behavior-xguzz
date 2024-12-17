# Pointer Arithmetic and Unexpected Behavior in C

This repository demonstrates a common C programming error related to pointer arithmetic and memory management. The bug showcases how seemingly simple pointer manipulations can lead to unintended consequences if not handled carefully.

## The Bug

The `bug.c` file contains a simple program that intends to modify the value of an integer variable using a pointer. However, due to a subtle error in pointer manipulation, the output is not as expected.

## The Solution

The `bugSolution.c` file presents a corrected version of the code, demonstrating the proper way to handle pointer arithmetic and memory addresses to achieve the intended behavior.

## Learning Points

This example highlights the importance of understanding:

* **Pointer declaration and initialization:** Ensure pointers are correctly declared and point to valid memory locations.
* **Dereferencing pointers:** Be mindful of the consequences when dereferencing pointers.
* **Memory allocation and deallocation:** Understand the implications of dynamic memory allocation and deallocation to avoid memory leaks and unexpected behavior.