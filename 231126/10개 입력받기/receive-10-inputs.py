n = input()
arr = list(map(int, n.split()))

sum_val = 0
cnt = 0

for i in range(len(arr)):
    cnt += 1
    if arr[i] == 0:
        avg_val = sum_val / (cnt - 1)
        break
    else:
        sum_val += arr[i]

print(sum_val, avg_val)