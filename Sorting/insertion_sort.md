# Insertion Sort

## Description
Insertion Sort is a simple sorting algorithm that builds the sorted array one element at a time. It processes an array of size `n` by repeatedly taking the next unsorted element and placing it in the correct position within the sorted portion of the array.

This is similar to how you might sort playing cards in your hand: 
- Start with one card and place it in order.
- Take the next card and insert it into the right spot in the sorted portion.

The algorithm is efficient for small arrays or arrays that are already mostly sorted. However, as the size of the input (`n`) grows, its performance degrades due to frequent shifting of elements.

## Algorithm Steps
1. Start with the second element in the array (index `1`). The first element (index `0`) is already "sorted."
2. For each element from index `1` to `n-1`:
   - Compare this element (the "key") with the elements in the sorted portion (indices `0` to `i-1`).
   - Shift all larger elements in the sorted portion one position to the right to make space for the key.
   - Insert the key into its correct position.
3. Repeat until all `n` elements are sorted.


## Complexity Analysis
- **Time Complexity**:
  - Worst Case: O(n²).  
    - This occurs when the array is sorted in reverse order. Each element requires shifting all preceding elements (`n` comparisons and shifts for the first element, `n-1` for the second, and so on).
  - Best Case: O(n).  
    - This occurs when the array is already sorted. Only `n-1` comparisons are needed, and no shifting is required.
  - Average Case: O(n²).  
    - On average, each element requires shifting half of the elements in the sorted portion.
- **Space Complexity**: O(1).  
  - The algorithm operates in-place, requiring no additional space beyond the input array, regardless of `n`.


## Example Walkthrough
Given an array of size `n = 5`: `[12, 11, 13, 5, 6]`

### Steps:
1. Start with `11` (key at index 1): Compare with `12`, shift `12` → Insert `11` → `[11, 12, 13, 5, 6]`.
2. Next `13` (key at index 2): No change → `[11, 12, 13, 5, 6]`.
3. Next `5` (key at index 3): Compare with `13`, `12`, `11`, shift all → Insert `5` → `[5, 11, 12, 13, 6]`.
4. Next `6` (key at index 4): Compare with `13`, `12`, `11`, shift all → Insert `6` → `[5, 6, 11, 12, 13]`.

Final Sorted Array (size `n = 5`): `[5, 6, 11, 12, 13]`

