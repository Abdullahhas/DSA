public class Prac1 {
   static class Node
    {
        int data;
        Node next;

        public Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    static class Stack
    {
        public static Node head;
        public static boolean isEmpty()
        {
            return head==null;
        }

        public static void push(int newdata)
        {
            Node newnode = new Node(newdata);
            if(isEmpty())
            {
                head = newnode;
                return;
            }
            newnode.next = head;
            head = newnode;
        }

        public static int pop()
        {
            if(isEmpty())
            {
                return -1;
            }
            int top = head.data;
            head = head.next;
            return top;
        }

        public static int peek()
        {
            if(isEmpty())
            {
                return -1;
            }
            return head.data;
        }

    }

    public static void main(String[] args) {
        Stack s = new Stack();
        s.push(1);
        s.push(2);
        s.push(3);
        while (!s.isEmpty())
        {
            System.out.println(s.peek());
            s.pop();
        }
    }



}
