### Linear

O(n)

```cpp
LinearSearch(array, key)
  for each item in the array
    if item == value
      return its index
```

### Binary

O(log n)

```cpp
do until the pointers low and high meet each other.
    mid = (low + high)/2
    if (x == arr[mid])
        return mid
    else if (x > arr[mid]) // x is on the right side
        low = mid + 1
    else                       // x is on the left side
        high = mid - 1
```
