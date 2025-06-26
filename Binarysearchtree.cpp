#include <iostream>
using namespace std;

class Node
{
    public:
    int info;
    Node *leftchild;
    Node *rightchild;
    

//constructor  for the node class
Node()
{
    {
    leftchild = nullptr; //Initialize left child to null
    rightchild = nullptr; //Initialize right child to null
    }
}
};

class BinaryTree
{
    public:
    Node *ROOT;

    BinaryTree()
    {
      ROOT = nullptr; //Initialize ROOT to null
    }

    void insert()
    {
        int x;
        cout <<"Masukkan nilai :";
        cin >> x;

        //step 1 : allocate memory for the new node
        Node *newNode = new Node ();

        //step 2 : assign value to the data field of new node
        newNode -> info = x;

        //step 3 : make the left and right child of new node point to null
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        //step 4 :locate the node which will be tje parent of the node to be inserted
        Node *parent = nullptr;
        Node *currentNode = nullptr;
        search(x, parent, currentNode);

        //step 5: If parent is null (tree is empty)
        if (parent == nullptr)
        {
            //5a: Mark the new node as ROOT
            ROOT = newNode;

            //5b:exit
            return;
        }
       //step 6 : If the value in the data field of nee node is less than that  of parent
       if(x < parent->info)
       {
          //6a: make the left child of parent point to the new node
          parent->leftchild = newNode;

          //6b:exit
          return;

          }
          //step 7: if the value in the data field of the new node is greater than that of the parent
            else if (x > parent->info)
          {
            //7a : make the right child of parent point to new node
            parent->rightchild = newNode;

            //7b : exit
            return;
       }
    }
};
