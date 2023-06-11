// Example of resizing a dynamic array
int initialSize = 10;
int *dynamicArray = new int[initialSize];
// ...
int newSize = initialSize * 2;
int *resizedArray = new int[newSize];
// Copy elements from dynamicArray to resizedArray
// ...
delete[] dynamicArray;       // Release memory of original array
dynamicArray = resizedArray; // Point dynamicArray to the resized array
