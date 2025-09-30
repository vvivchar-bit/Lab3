Laboratory Work №3

Course: Object-Oriented Programming
Topic: One-dimensional arrays and matrices
Student: Vivchar Vadym, group ALK-43

Purpose of the work

Learn algorithms for processing arrays and matrices.

Practice designing block diagrams and writing programs.

Improve programming skills in IDE Dev-C++.

Tasks
Task 1 (variant 20)

Find the minimum element of the array and its index.

Algorithm:

Input the number of elements and the array itself.

Traverse all elements and find the smallest value.

Print the minimum value and its index.

Task 2 (variant 10)

The coordinates of n vectors are given by a matrix A(m,n) (m ≤ 5, n ≤ 6).
Calculate the lengths of these vectors and store them in a one-dimensional array.
Find the maximum length and its index.

Algorithm:

Input the dimensions of the matrix (m, n) and its elements.

For each column, calculate the vector length:
L = sqrt(a1² + a2² + ... + am²)

Save the lengths into an array.

Find the maximum length and its index.

Control questions

How is an array declared?
Answer: type name[size]; (example: int a[10];).

What types of arrays are possible?
Answer: Any types – integers, floating-point, char, bool, structures, classes, pointers; one-dimensional and multidimensional.

What happens if fewer elements are specified during initialization?
Answer: Specified values are stored, the rest are filled with zeros (for basic types).

How to access an array element?
Answer: By index a[i]; or through a pointer *(p+i).

How to copy one array into another?
Answer: With a loop, std::copy(), or assignment operator for std::vector.

How to describe an array of pointers?
Answer: type *name[size]; (example: int *p[5];).

What is dereferencing for?
Answer: To get the value stored at the address a pointer refers to (*p).

How to input and output arrays?
Answer: With a loop using cin >> a[i]; / cout << a[i];, or with iterators.

What are the known format specifiers (C++ iostream)?
Answer: fixed, scientific, setprecision, setw, setfill, left, right, hex, oct, dec, showpos.

Used environment

Hardware: PC

Software: IDE Dev-C++
