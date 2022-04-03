using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PaintApplication
{
    public class NodeS
    {

        public string operation;
        public NodeS next = null;
        public NodeS(string data)
        {
            operation = data;
        }
    };
    public class Stack
    {
        public int count = 0;
        public NodeS head;
        public NodeS tail;
        public Stack()
        {
            head = null;
            tail = null;
        }
        public void push(string z)
        {
            NodeS n = new NodeS(z);
            if (head == null)
            {
                head = n;
                tail = n;
            }
            else
            {
                n.next = head;
                head = n;

            }
            count++;
        }
        public NodeS pop()
        {
            NodeS temp = head;
            if (temp!= null)
            {
                head = head.next;
                temp.next = null;
            }
            return temp;
        }
    };
}
