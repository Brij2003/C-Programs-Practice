'''To rotate by one, store arr[0] in a temporary variable temp, move arr[1] to arr[0], arr[2] to arr[1] …and finally temp to arr[n-1]
Let us take the same example arr[] = [1, 2, 3, 4, 5, 6, 7], d = 2 
Rotate arr[] by one 2 times 
We get [2, 3, 4, 5, 6, 7, 1] after first rotation and [ 3, 4, 5, 6, 7, 1, 2] after second rotation.'''

def rotateArray(a):
    temp = a[0]
    i = 0
    while(i+1 < len(a)):
        a[i] = a[i+1]
        i += 1
    a[len(a) - 1] = temp
    
'''function rotate(arr[], d, n) that rotates arr[] of size n by d elements.'''
def reverseArray(a,start,end):
    while(start < end):
        temp = a[start]
        a[start] = a[end]
        a[end] = temp
        start += 1
        end -= 1
        
def rotateArray2(a,d):
    if(d == 0):
        return a
    
    n = len(a)
    reverseArray(a,0,d - 1) 
    reverseArray(a,d,n - 1) 
    reverseArray(a,0,n - 1)
    

n = [1,2,3,4,5,6,7]
# rotateArray(n)
# rotateArray(n)
# rotateArray(n)
# rotateArray(n)
d = 4
rotateArray2(n,d)
print(n)
    
    
