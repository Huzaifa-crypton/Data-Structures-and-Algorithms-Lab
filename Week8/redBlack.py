class Node:
    def Node(self , data):
        self.right = None
        self.left = None
        self.key = data
        self.color = "red"
        self.parent = None
    
class RBTree:
    def RBTree(self):
        self.root = None
    
    def insert(self , key):
        n = Node(key)
        if (self.root == None):
            self.root = n
            n.color = "black"
        else:
            y = self.root
            while y != None :
                if (key > y.key):
                    if (y.right == None):
                        y.right = n
                        y.right.parent = y
                        self.transplant(self,y.right)
                    y = y.right
                    
                else:
                    if (y.left == None):
                        y.left = n
                        y.left.parent = y
                        self.transplant(self,y.left)
                    y = y.left 
            
    def transplant(self , node):
        if (node.parent.colour == "black"):
            return
        else:
            if (node.parent.parent.right.colour == "black"):
                if (node == node.parent.left and node.parent == node.parent.parent.left):
                    self.rightRotation()

                
                    
                    
            
            elif (node == node.parent.right):
                pass    
                
    def rightRotation(self , node):
        w = node.parent.parent.parent
        x = node.parent.parent
        y = node.parent
        a = node.parent.right
        b = node.parent.left
        if (x == w.left):
            w.left = y
            y.parent = w
            y.right = x
            x.parent = y
        if (x == w.right):
            w.right = y
            y.parent = w
            y.right = x
            x.parent = y
        c = y
            while c != None :
                if (a.key > c.key):
                    if (c.right == None):
                        c.right = a
                        c.right.parent = y
                        break
                    y = y.right
                    
                else:
                    if (y.left == None):
                        y.left = n
                        y.left.parent = y
                        self.transplant(self,y.left)
                    y = y.left 
