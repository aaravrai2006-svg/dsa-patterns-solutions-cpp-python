def max_sub_array_of_size_k(k: int, arr: list[int]) -> int:
    max_sum = 0
    window_sum = 0
    window_start = 0

    for window_end in range(len(arr)):
        window_sum += arr[window_end]
        if window_end >= k - 1:
            max_sum = max(max_sum, window_sum)
            window_sum -= arr[window_start]
            window_start += 1
            
    return max_sum

if __name__ == "__main__":
    print("Max sum of subarray size 3:", max_sub_array_of_size_k(3, [2, 1, 5, 1, 3, 2]))
