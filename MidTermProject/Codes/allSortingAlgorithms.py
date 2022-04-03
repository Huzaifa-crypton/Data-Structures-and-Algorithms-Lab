def selectionSort(A):
    for i in range(len(A)):
        for n in range(i+1,len(A)):
            if A[n] < A[i]:
                new =  A[i]
                A[i] = A[n]
                A[n] = new
    return A
def insertionSort(A):
    for i in range(1, len(A)):
        currentNum = A[i]
        for j in range (i-1 , -1 , -1):
            if (currentNum < A[j]):
                A[j+1] = A[j]
                A[j] = currentNum
            else :
                A[j+1] = currentNum
                break
    return A
def mergeSort(A , a , b):
    if a!=b : 
        mid = (a + b) // 2
        mergeSort(A , a , mid)
        mergeSort(A , mid + 1 , b)
        merge(A , a  , mid , b)

def merge(A , a , mid , b):
    L = []
    R = []
    for i in range(a , mid+1):
        L.append(A[i])
    for i in range(mid+1 , b+1):
        R.append(A[i])    
    i = a
    j = 0
    k = 0
    while (j < len(L) and k < len(R)):
        if (L[j] < R[k]): 
            A[i] = L[j]
            j+=1
            i+=1
        else:
            A[i] = R[k]
            k+=1
            i+=1
    while (j < len(L)):
        A[i] = L[j]
        i+=1
        j+=1
    while (k < len(R)):
        A[i] = R[k]
        k+=1
        i+=1
def bubbleSort(A):
    a = 0
    j = len(A)-2
    while a < j:
        for i in range(j+1):
            if(A[i] > A[i+1] ):
                y = A[i]
                A[i] = A[i+1]
                A[i+1] = y
        j-=1