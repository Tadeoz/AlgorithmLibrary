def insertion_sort(arr):
    """
    Perform Insertion Sort on a list with detailed output.
    
    Parameters:
    arr (list): The list of elements to sort.

    Returns:
    None: The list is sorted in place.
    """
    print(f"Original array: {arr}")  # Print the original array

    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        
        # Show the key being considered
        print(f"\nKey being inserted: {key}")
        
        # Shift elements of the sorted portion to the right
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
            print(f"  After shifting: {arr}")  # Show the array after each shift

        # Insert the key at the correct position
        arr[j + 1] = key
        print(f"  Inserted {key} at position {j + 1}: {arr}")  # Show the array after insertion

    print(f"\nSorted array: {arr}")  # Print the final sorted array


# Example usage
if __name__ == "__main__":
    arr = [12, 11, 13, 5, 6]  # Test array
    insertion_sort(arr)  # Perform the sorting

