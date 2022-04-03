class Node:
    key = None
    left = None
    right = None
    colour = ""
    p = None
    def __init__(self ,key , colour):
        self.key = key
        self.colour = colour

def insertNode(T , z):
    z = Node(z , 'red')
    x = T
    y=None
    if x.right!=None and z.key > x.key:
        y = x
        x = x.right
    elif x.left!=None and z.key < x.key :
        y = x
        x = x.left
    if y == None:
        T = z
        T.colour= "black"
    elif y.key  > z.key:
        y.left = z
    else:
        y.right = z



def BSTMIN(z):
    y = None
    while z.left != None:
        y = z
        z = z.left
    return y
def inorderSuccessor(T , z):
    y = None
    if (z.right!=None):
        successor = BSTMIN(z.right)
    elif (z.right == None and z == z.p.left):
        while z == y.left:
            y = z.p.p
            z = z.p
    elif (z.right == None and z == z.p.right):
        while z == y.right:
            y = z.p.p
            z = z.p        
    return y


def countLeafNodes(T):
    
    count = countLeafNodes(T.left)
    count = countLeafNodes(T.right)
    return count + count
    



r = Node(10 , 'black')
insertNode(r , 20)
    