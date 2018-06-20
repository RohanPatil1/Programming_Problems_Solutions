def number_needed(a, b):
    anagram_dict = dict.fromkeys(a + b, 0)
    for letter in a:
        anagram_dict[letter] += 1
    for letter in b:
        anagram_dict[letter] -= 1
    return sum([abs(val) for val in anagram_dict.values()])