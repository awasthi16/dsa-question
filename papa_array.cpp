🔹 Array & Number Problems Cheat Sheet
1. Second Largest Element

Task: Find the 2nd largest element in array.

Approach: One-pass scan, keep track of max1 and max2.

Time: O(n), Space: O(1).

2. Third Largest Element

Task: Find the 3rd largest distinct element.

Approach: Keep track of max1, max2, max3 in one scan.

Time: O(n), Space: O(1).

3. Three Great Candidates

Task: Maximize product of three numbers in array.

Approach: Either largest three elements OR two smallest (negative) and largest.

Time: O(n log n) (sort), Space: O(1).

4. Max Consecutive Ones

Task: Find maximum consecutive 1s in binary array.

Approach: Count streaks, reset on 0.

Time: O(n), Space: O(1).

5. Move All Zeroes To End

Task: Shift all 0s to end without changing order.

Approach: Two-pointer method (write index).

Time: O(n), Space: O(1).

6. Reverse Array in Groups

Task: Reverse every group of k elements.

Approach: Iterate in steps of k, reverse subarray.

Time: O(n), Space: O(1).

7. Rotate Array

Task: Rotate array by k places.

Approach: Reverse-based method (reverse whole, then parts).

Time: O(n), Space: O(1).

8. Wave Array

Task: Convert array to wave form (a1 ≥ a2 ≤ a3 ≥ a4 …).

Approach: Sort and swap adjacent OR swap in pairs.

Time: O(n log n), Space: O(1).

9. Plus One

Task: Add 1 to number represented as digits.

Approach: Traverse from end, handle carry.

Time: O(n), Space: O(1).

10. Stock Buy and Sell – One Transaction

Task: Max profit with single buy-sell.

Approach: Track min price & max profit.

Time: O(n), Space: O(1).

11. Repetitive Addition Of Digits (Digital Root)

Task: Keep adding digits until one digit left.

Approach: Use formula dr(n) = 1 + (n-1)%9.

Time: O(1).

12. Remove All Occurrences of Element

Task: Remove val from array in-place.

Approach: Two-pointer overwrite.

Time: O(n), Space: O(1).

13. Remove Duplicates from Sorted Array

Task: Unique elements remain in-place.

Approach: Two-pointer, skip duplicates.

Time: O(n), Space: O(1).

14. Alternate Positive Negative

Task: Rearrange array as +ve, -ve, +ve, -ve.

Approach: Partition & merge alternately.

Time: O(n), Space: O(1) (with rotations).

15. Insert Duplicate Element

Task: For each element, insert its duplicate.

Approach: Traverse & insert.

Time: O(n), Space: O(n) (for result).

16. Array Leaders

Task: Elements greater than all elements to right.

Approach: Traverse from right, track max.

Time: O(n), Space: O(1).

17. Missing and Repeating in Array

Task: Find missing & repeating number in 1..n array.

Approach: XOR / Math formulas (sum & sum of squares).

Time: O(n), Space: O(1).

18. Missing Ranges of Numbers

Task: Find missing ranges in sorted array.

Approach: Iterate pairs & track gaps.

Time: O(n), Space: O(1).
