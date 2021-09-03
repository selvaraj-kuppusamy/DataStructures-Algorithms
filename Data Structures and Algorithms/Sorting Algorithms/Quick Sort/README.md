# Quick Sort

A sorting algorithm that uses divide and conquer. It recursively partitions the array by picking a pivot, the elements to the left of pivot are smaller and the elements to the right of pivot are larger when compared to the pivot.

Hoare partitioning is more efficient than Lomuto's partition scheme because it does three times fewer swaps on average and creates efficient partitions.


### Time Complexity

Best Case: Ω(n log(n))

Average Case: θ(n log(n))

Worst Case: O(n²)

where n represents the size of the array.


### Space Complexity

Worst Case: O(log(n))

where n represents the size of the array.


### Input Format

The first line contains an integer `n`, the size of array.

The next line contains `n` space-separated integers `arr[i]` where 0 ≤ `i` < `n`.


### Output Format

The array `arr` in sorted order.


### Sample Input

```
5
5 3 1 2 4
```


### Sample Output

```
1 2 3 4 5
```
