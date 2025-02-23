countingSort function:

We create a frequency array freq of size 100 initialized to zeros.
We then iterate over the input array arr and for each element, increment the corresponding index in the freq array.
Main function:

First, we read the number of integers in the array.
We then read the integers into the array arr.
After that, we call countingSort(arr) to get the frequency array.
Finally, we print the frequency array where each element at index i represents the frequency of number i in the original array.
Time Complexity:
Time Complexity: O(n) where n is the size of the input array. We are just iterating over the array once to populate the frequency array.
Space Complexity: O(100) which is constant space for the frequency array (since the size is fixed to 100).
Example Walkthrough:
For the input:

Copy
100
63 25 73 1 98 73 56 84 86 57 16 83 8 25 81 56 9 53 98 67 99 12 83 89 80 91 39 86 76 85 74 39 25 90 59 10 94 32 44 3 89 30 27 79 46 96 27 32 18 21 92 69 81 40 40 34 68 78 24 87 42 69 23 41 78 22 6 90 99 89 50 30 20 1 43 3 70 95 33 46 44 9 69 48 33 60 65 16 82 67 61 32 21 79 75 75 13 87 70 33
The program will print:

Copy
0 2 0 2 0 0 1 0 1 2 1 0 1 1 0 0 2 0 1 0 1 2 1 1 1 3 0 2 0 0 2 0 3 3 1 0 0 0 0 2 2 1 1 1 2 0 2 0 1 0 1 0 0 1 0 0 2 1 0 1 1 1 0 1 0 1 0 2 1 3 2 0 0 2 1 2 1 0 2 2 1 2 1 2 1 1 2 2 0 3 2 1 1 0 1 1 1 0 2 2
This output corresponds to the frequency of numbers from 0 to 99 in the input array. For example, the number 63 appears once, the number 25 appears three times, and so on.

Conclusion:
This solution efficiently computes the frequency of each number in the input array using counting sort, with a time complexity of O(n) and space complexity of O(100).



