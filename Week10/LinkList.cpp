#include <iostream> 
using namespace std;
class Node{
    public:
        int Data;   
        Node* Next = NULL;
        Node(int val)
        {
            Data = val;
        }
};
class LinkList {
    public:
        LinkList(void)
        {
            head = NULL;
        }
        ~LinkList(void)
        {
        }
        bool isEmpty()
        {
            if (head == NULL)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        void insertNode(int index, int x)
        {
            Node* n = new Node(x);
            Node* next = head;
            int idx = 1;
            while (index > idx){
                if (next -> Next != NULL)
                {
                    next = next -> Next;
                    idx++;
                }
                else{
                    
                    index = idx;
                }       
            }
            if (idx == index)
            {
                if (next == head)
                {
                    head = n;
                    next = n;
                }
                else{
                    Node* y = next -> Next;
                    next -> Next = n;
                    n -> Next = y;
                }
                // cout << next->Data<<endl; 
            }
            else
            {   
                cout<<"NOT FOUND"<<endl;
            }
            
        } //insert at the given index
        void insertAtHead(int x)
        {   
            Node* n = new Node(x);
            Node* next = head;
            
            if (head == NULL)
            {
                next = n;
                head = n;
            }
            else{
                head = n;
                n->Next = next;
            }
                
            // cout <<head->Data<<endl; 
        }
        //insert at start of list
        void insertAtEnd(int x)
        {
            Node* n = new Node(x);
            Node* next = head;
             if (head == NULL)
            {
                head = n;
            }
            else{
            while (next -> Next != NULL)
            {
                next = next -> Next;      
            }
            next->Next = n;

            }    
            // cout << next->Next->Data<<endl; 
        
        } //insert at end of list
        bool findNode(int x)
        {
            Node* next = head;
            while (next != NULL)
            {
                if (next -> Data == x)
                {
                    cout<<"FOUND"<<endl;
                    return true;
                }
                next = next -> Next;
            }
            return false;



        } //search for data value x in the list
        bool deleteNode(int x)
        {
            Node* n = head;
            while (n != NULL)
            {
                Node* temp = n->Next;
                if (temp -> Data == x)
                {
                    n->Next = temp->Next;
                    temp -> Next = NULL;
                    return true;
                }
                n = n -> Next;

            }
            return false;
        } //delete all occurrences of x
        bool deleteFromStart()
        {
            if (head != NULL){
                Node* n = head;
                head = head->Next;
                return true;
            }
            else
            {
                return false;
            }
            
        } //deletes starting node of list
        bool deleteFromEnd()
        {
            Node* next = head;
            while (next != NULL)
            {
                Node* temp = next->Next->Next;
                if (temp == NULL)
                {
                    next->Next = NULL;
                    return true;
                }
                next = next -> Next;
            }
            return false;


        } //deletes last node of list
        void displayList(void)
        {
            Node* next = head;
            while (next!= NULL)
            {
                cout<< next -> Data << " , ";
                next = next -> Next;
            }
            cout<<endl;

        }
        void reverseList()
        {
            Node* next = NULL;
            Node* current = head;
            Node* prev = NULL;
            while (current != NULL)
            {   
                next = current ->Next;
                current -> Next = prev;
                prev = current;
                current = next;
            }
            head = prev;
        } //reverses the linklist and returns a new list
        void sortList()
        {
            Node* current = head->Next;
            Node* prev = head;

            while (current != NULL)
            {
                if (current->Data < prev -> Data)
                {
                    prev ->Next = current ->Next;
                    current -> Next = head;
                    head = current;
                    current = current -> Next;
                    prev = head;
                }
                else
                {
                    prev = current;
                    current = current -> Next;
                }
            }
        } //sorts the input-ed list
        void removeDuplicates()
        {
            Node* current = head;
            Node* temp = head;
            while (current != NULL)
            {
                while (temp != NULL )
                {
                    string hel;
                    temp = temp -> Next;
                    string hello;
                    if (temp != NULL && temp->Data == current->Data)
                    {
                        temp -> Next = temp->Next->Next;
                    }
                    // cout<<temp->Data<<endl;
                    // cout<<current->Data<<endl;
                }
                current = current ->Next;
                temp = current;
                // cout<<"NElak"<<endl;
                // cout<<temp->Data<<endl;
                // cout<<current->Data<<endl;
            }
        }//removes duplicates from list
        void mergeLists(Node* list1, Node* list2)
        {
            Node* current1 = list1;
            Node* current2 = list2;

            while(current1 ->Next != NULL)
            {
                current1 = current1 -> Next;
            }
            current1 -> Next = current2;
        }
         //merges two lists
        void interestLists(Node* list1, Node* list2)
        {
            Node* current1 = list1;
            Node* current2 = list2;
            LinkList l = LinkList();
            while (current2!= NULL)
            {
                current1 = list1;
                while(current1!= NULL)
                {
                    if (current1->Data == current2->Data)
                    {
                        l.insertAtEnd(current1 -> Data);
                        break;
                    }
                    current1 = current1 -> Next;

                }
                current2 = current2 -> Next;
            }
            l.displayList();
        } //results contains

    public:
        Node* head;
};
int main()
{
    LinkList l1 = LinkList();
    // l.insertNode(1 , 12);
    l1.insertAtEnd(45); 
    l1.insertAtEnd(128);
    l1.insertAtEnd(1123);
    // l1.insertAtEnd(140);
    // l1.insertAtEnd(127);
    // l1.insertAtEnd(123);
    // l1.insertAtEnd(1286);    
    // l1.insertAtEnd(536);
    // l1.insertAtEnd(1421);
    // l1.displayList();
    // l1.removeDuplicates();
    // l1.displayList();
    
    LinkList l = LinkList();
    // l.insertNode(1 , 12);
    l.insertAtEnd(45); 
    l.insertAtEnd(12);
    l.insertAtEnd(1123);
    // l.insertAtEnd(14);
    // l.insertAtEnd(123);
    // l.insertAtEnd(123);
    // l.insertAtEnd(12);    
    // l.insertAtEnd(532);
    // l.insertAtEnd(1421);
    // l.mergeLists(l.head , l1.head);
    // l.displayList();


    l.interestLists(l1.head , l.head);
    // l.reverseList();
    // l.displayList();
    // l.sortList();
    // l.displayList();
    // cout<<l.findNode(12);
};

