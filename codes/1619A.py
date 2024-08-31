


n = int(input())


nums = list(map(int, input().split()))


temp = [nums[0]]
length = 1
print(length, end=" "  )
for i in range(1, n):
    if nums[i] >= temp[-1]:
        temp.append(nums[i])
        length += 1
    else:
        idx = next((index for index, value in enumerate(temp) if value >= nums[i]), None)
        if idx is not None:
            temp[idx] = nums[i]

    print(length, end=" ")