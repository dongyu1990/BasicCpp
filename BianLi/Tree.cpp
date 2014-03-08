#include"Tree.h"

Tree::Tree()
{
    root=NULL;
}
Tree::~Tree()
{}

bool Tree::CreatTree(Node* & node)
{
    char ch;
    cin>>ch;
    if(ch=='#')
        node = NULL;
    else
    {
        node=new Node(ch);
        CreatTree(node->left);
        CreatTree(node->right);
    }
         
}

void Tree::PreOrder(Node * &input)
{
    if(input != NULL)
    {
        cout<<input->name<<" ";
        PreOrder(input->left);
        PreOrder(input->right);
    }
}


