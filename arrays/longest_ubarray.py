def longest_subarray_sum_k(nums, k):
    prefix_sum = 0
    max_len = 0
    hashmap = {}  # sum -> index

    for i, num in enumerate(nums):
        prefix_sum += num

        if prefix_sum == k:
            max_len = i + 1

        if (prefix_sum - k) in hashmap:
            max_len = max(max_len, i - hashmap[prefix_sum - k])

        if prefix_sum not in hashmap:
            hashmap[prefix_sum] = i

    return max_len
