#include<iostream>
#include<string>
using namespace std;
struct Node
{
    int num;
    Node * next;
};

Node * CreatRing(int N)
{
    Node * first = new Node();
    first->num=0;
    Node * head = first;
    int i = 1;
    while(i<N)
    {
        Node * temp = new Node();
        temp->num = i;
        first->next = temp;
        first = first->next;
        i++;
    }
    first->next = NULL;
    return head;
}
void PrintRing(Node * input)
{
    while(input != NULL)
    {
        cout<<input->num<<" ";
        input = input->next;
    }
    cout<<endl;

}
void ReversePrint(Node * input)
{
    if(input != NULL)
    {
        if(input->next != NULL)
        {
            ReversePrint(input->next);
        }
    }
    cout<<input->num<<" ";

}
int main()
{
    Node * first = CreatRing(100);
    PrintRing(first);
    ReversePrint(first);
    return 0;
}
