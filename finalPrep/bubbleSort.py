
def bubbleSort(A):
    for i in range(len(A)-1 , 0 , -1):
        j = 0
        while j < i:
            if (A[j] > A [j+1]):
                y = A[j]
                A[j] = A[j+1]
                A[j+1]= y 
            j+=1
A = [5,2,5,6,2,6,8,9,4,2,6,8,9,5,3,1,6,85,74,345,24,1]
bubbleSort(A)
print(A)