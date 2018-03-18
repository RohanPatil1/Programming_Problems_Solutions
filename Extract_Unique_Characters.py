"""
Given a string, you need to remove all the duplicates. That means, the output string should contain each character only once. 
The respective order of characters should remain same.
"""

def unique(s):
    characters = set()

    for letter in s:
        if letter in characters:
            pass
        else:
            characters.add(letter)
    
    result=list(characters)
    result.sort()
    
    
    print ''.join(result)

unique('aabbccd')

