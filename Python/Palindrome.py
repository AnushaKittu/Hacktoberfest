## test palindrome for input text

# function which return reverse of a string 
def reverse(s): 
        return s[::-1] 

def isPalindrome(s):
    rev = reverse(s) 
    if (s == rev): 
        return True
    return False

s = str(input("Please enter the text: \n"))
ans = isPalindrome(s.lower()) 

if ans == 1: 
    print("Yes, It's a PALINDROME") 
    
else: 
    `print("Not PALINDROME")
