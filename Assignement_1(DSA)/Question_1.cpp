  #include <iostream>
  using namespace std;

  struct stack
  {
    int top = -1;
    char name;
    int array[10];
  };

  //Push Pop and Print Functions
  void push(stack *s, int c)
  {
    if (s->top == (sizeof(s->array) / sizeof(s->array[0])) - 1)
    {
      cout << "Stack Overflow" << endl;
      return;
    }
    else
    {
      s->top++;
      s->array[s->top] = c;
    }
  }



  void pop(stack *s)
  {
    if (s->top == -1)
    {
      cout << "Stack Underflow" << endl;
      return;
    }
    else
    {
      s->array[s->top] = 0;
      s->top--;
    }
  }

  void print(stack *s)
  {
    for (int i = 0; i <= s->top; i++)
    {
      cout << s->array[i] << " ";
    }
    cout << endl;
  }

  void toh(int num, stack *from, stack *to, stack *aux)
  {
    if (num == 1)
    {
      cout << "Move disk " << num << " from rod " << from->name << " to rod " << to->name << endl;
      push(to, from->array[from->top]);
      pop(from);
      return;
    }
    else
    {
      //SHIFT ALL THE DISKS EXCEPT THE LAST ONE FROM A TO B USING C
      toh(num - 1, from, aux, to);
      cout << "Move disk " << num << " from rod " << from->name << " to rod " << to->name << endl;
      //SHIFT THE LAST REMAINING FROM A TO C
      push(to, from->array[from->top]);
      pop(from);
      //SHIFT ALL THE DISKS EXCEPT THE GREATE   ST ONE FROM B TO C USING A
      toh(num - 1, aux, to, from);
    }
  }

  int main()
  {
    int rings;
    stack a, b, c;
    a.name = 'A';
    b.name = 'B';
    c.name = 'C';
    cout << "Enter Number of rings : ";
    cin >> rings;
    //Loop to enter rings into the first Stack
    for (int i = rings; i > 0; i--)
    {
      push(&a, i);
    }
    //Printing stack after entering rings
    cout << "\n---Before Solving---" << endl << endl;
    cout << "Tower A: " << endl;
    print(&a);
    cout << "Tower B: " << endl;
    print(&b);
    cout << "Tower C: " << endl;
    print(&c);

    toh(rings, &a, &c, &b);
    //Printing the resultant stacks
    cout << "\n---After Solving---" << endl << endl;
    cout << "Tower A: " << endl;
    print(&a);
    cout << "Tower B: " << endl;
    print(&b);
    cout << "Tower C: " << endl;
    print(&c);

    return 0;
  }

