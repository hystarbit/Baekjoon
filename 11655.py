S = input()
alphabet_upper_front = [chr(i) for i in range(ord('A'), ord('M') +1)]
alphabet_upper_back = [chr(i) for i in range(ord('N'), ord('Z') +1)]
alphabet_lower_front = [chr(i) for i in range(ord('a'), ord('m') +1)]
alphabet_lower_back = [chr(i) for i in range(ord('n'), ord('z') +1)] 
for i in range(len(S)):
    if S[i] in alphabet_upper_front or S[i] in alphabet_lower_front:
        S[i] = chr(ord('S[i]') + 13)
    elif S[i] in alphabet_upper_back or S[i] in alphabet_lower_back:
        S[i] = chr(ord('S[i]') - 13)
print(S)
