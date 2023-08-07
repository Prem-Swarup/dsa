class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        def binarySearch(nums, target):
            left, right = 0, len(nums)
            index = 0
            while left <= right:
                mid = (left + right) // 2
                if mid < 0 or mid >= len(nums):
                    break
                if nums[mid] == target:
                    return mid
                elif nums[mid] > target:
                    right = mid - 1
                else:
                    left = mid + 1
            return left
        m, n = len(matrix), len(matrix[0])
        # if m > 1:
        headers = [matrix[i][0] for i in range(len(matrix))]
        # print(headers)
        row_index = binarySearch(headers, target)
        # print(row_index)
        if row_index < 0:
            row_index = 0
        if row_index == m:
            row_index = m-1
        if headers[row_index] == target:
            return True
        elif headers[row_index] > target:
            row = [matrix[row_index-1][i] for i in range(len(matrix[0]))]
        else:
            row = [matrix[row_index][i] for i in range(len(matrix[0]))]
        # else:
        #     row = [matrix[0][i] for i in range(n)]
        # print(row)
        col_index = binarySearch(row, target)
        if col_index < 0 or col_index >= n:
            return False
        if row[col_index] == target:
            return True
        return False
