def get_nth_letter(n):
    i = 1
    while i*(i+1)//2 < n:
        i += 1
    pos = n - (i-1)*i//2
    return chr(ord('A') + (pos-1) % 26)

T = int(input())
for t in range(1, T+1):
    N = int(input())
    letter = get_nth_letter(N)
    print(f"Case #{t}: {letter}")