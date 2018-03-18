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

