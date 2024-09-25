#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int top;
    int n;
    int *arr;

    Stack(int n)
    {
        this->top = -1;
        this->n = n;
        arr = new int[n];
    }

    void push(int d)
    {
        if (top >= n - 1)
        {
            cout << "Stack overflow." << endl;
            return;
        }

        arr[++top] = d;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow." << endl;
            return;
        }

        top--;
    }

    void peek()
    {
        cout << arr[top] << endl;
    }

    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    int n;
    cin >> n;
    Stack s1(n);

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);

    while (!s1.isempty())
    {
        s1.peek();
        s1.pop();
    }
}