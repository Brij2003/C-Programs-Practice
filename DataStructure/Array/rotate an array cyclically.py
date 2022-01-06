# Given an array, cyclically rotate the array clockwise by one. 

def rotateCyclic(a):
    start = 0
    end = 1
    while(end != len(a)):
        temp = a[start]
        a[start] = a[end]
        a[end] = temp
        end += 1
        
a = [1,2,3,4,5,6]
rotateCyclic(a)
print(a)
        
        
        