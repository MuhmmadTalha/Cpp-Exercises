#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }

    // Time Complexity: O(1)
    void push_front(int val)
    { // insert at start
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    // Time Complexity: O(1), if we hadnt used tail just head then it would have been O(n)
    void push_back(int val)
    { // insert at end
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Time Complexity: O(1)
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "LL is empty";
            return;
        }

        Node *temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;
    }

    // Time Complexity: O(n)
    void pop_back()
    {
        if (head == NULL)
        {
            cout << "LL is empty\n";
            return;
        }
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    // Time Complexity: O(n)
    void insert(int val, int pos)
    {
        if (pos < 0)
        {
            cout << "Invalid Position";
            return;
        }

        if (pos == 0)
        {
            push_front(val);
            return;
        }

        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Invalid pos\n";
                return;
            }
            temp = temp->next;
        }

        Node *newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Time Complexity: O(n)
    void reverse()
    {
        Node *prev = NULL;
        Node *curr = head;
        Node *next = NULL;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }

        head = prev;
    }
    // Time Complexity: O(n)
    void printLinkedList()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Time Complexity: O(n)
    int search(int key)
    {
        Node *temp = head;
        int idx = 0;

        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return idx;
            }

            temp = temp->next;
            idx++;
        }
        return -1;
    }

    // Time Complexity: O(n+m)
    void mergingLL(Node *head1, Node *head2)
    {
        if (head1 == NULL)
            return head2;
        if (head2 == NULL)
            return head1;

        // case1
        if (head1->data <= head2->data)
        {
            head1->next = mergingLL(head1->next, head2);
            return head1;
        }
        // case2
        else
        {
            head2->next = mergingLL(head1, head2->next);
            return head2;
        }
    }
};

int main()
{
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.insert(4, 0);
    ll.printLinkedList();

    cout << ll.search(2) << endl;

    return 0;
}
