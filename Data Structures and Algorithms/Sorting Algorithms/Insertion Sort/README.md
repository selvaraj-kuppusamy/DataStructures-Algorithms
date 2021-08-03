# Insertion Sort


A sorting algorithm that builds the final sorted array one at a time. When people sort playing cards, most use a method similar to insertion sort.
In insertion sort,values from the unsorted part are picked and inserted at the correct position in the sorted part


### Time Complexity

Best Case: Ω(n)

Average Case: θ(n²)

Worst Case: O(n²)

where n represents the size of the array.


### Space Complexity

Worst Case: O(1)


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
