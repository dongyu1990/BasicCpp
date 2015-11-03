#include<iostream>
#include<stack>
using namespace std;

struct Node
{
    char name;
    Node * left;
    Node* right;
    bool firstflag;
    Node(char input)
    {
        name = input;
        left = NULL;
        right ;
        firstflag = false; 
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
    void PreOrder_2(Node *);
    void MidOrder(Node * &);
    void MidOrder_2(Node *);
    void PostOrder(Node * &);
    void PostOrder_2(Node *);
    
};
