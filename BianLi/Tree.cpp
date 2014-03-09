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
void Tree::PreOrder_2(Node * input)
{
    stack<Node *> tempstack;
    if(input == NULL)
        return;
    while(input != NULL || !tempstack.empty())
    {
        while(input != NULL)
        {
            cout<<input->name<<" ";
            tempstack.push(input);
            input = input->left;


        }
        if(!tempstack.empty())
        {
            input = tempstack.top();
            tempstack.pop();
            input = input->right;
        }
    }
}
void Tree::MidOrder(Node * & input)
{
    if(input != NULL)
    {
        MidOrder(input->left);
        cout<<input->name<<" ";
        MidOrder(input->right);
    }
}

void Tree::MidOrder_2(Node * input)
{
    stack<Node *> tempstack;
    if(input == NULL)
        return;
    while(input != NULL || !tempstack.empty())
    {
        while(input != NULL)
        {
            tempstack.push(input);
            input = input->left;
        }
        if(!tempstack.empty())
        {
            input = tempstack.top();
            cout<<input->name<<" ";
            tempstack.pop();
            input = input->right;
        }
    }

}

void Tree::PostOrder(Node * & input)
{
    if(input != NULL)
    {
        PostOrder(input->left);
        PostOrder(input->right);
        cout<<input->name<<" ";
    }
}

void Tree::PostOrder_2(Node * input)
{
    stack<Node *> tempstack;
    if(input == NULL)
        return;
    while(input != NULL || !tempstack.empty())
    {
        while(input != NULL)
        {
            tempstack.push(input);
            input->firstflag = true;
            input = input->left;
        }

        if(!tempstack.empty())
        {
            input = tempstack.top();
            tempstack.pop();
            
            if(input->firstflag == true)
            {
                input->firstflag = false;
                tempstack.push(input);
                input = input->right;
            }
            else
            {
                cout<<input->name<<" ";
                input = NULL;

            }

        }
    }
    
}














































