#include<iostream>
using namespace std;

struct Node
{
    char name;
    Node * left;
    Node* right;
    Node(char input)
    {
        name = input;
    }
    
};

class Tree
{
public:
    Node * root;
public:
    Tree();
    ~Tree();
    bool CreatTree(Node * &);
    void PreOrder(Node * &);
    
};
