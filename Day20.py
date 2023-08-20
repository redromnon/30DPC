'''Given a sequence of n strings, the task is to check if any two similar words come together and 
then destroy each other then print the number of words left in the sequence after this pairwise destruction.
'''

s = input()
s = s.split(sep=' ')

#Assume
found_duplicate = True

while(found_duplicate):

    for i in range(0, len(s), 1):
        
        #Finish if reached the end, meaning no duplicates found
        if i == len(s)-1:
            found_duplicate = False
            break
        
        #Check for a match
        if s[i] == s[i+1]:
            s.pop(i)
            s.pop(i)
            break

#Print count of left-over elements
print(len(s))
