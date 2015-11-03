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
    first->next = head;
    return head;
}
void PrintRing(Node * input)
{
    for(int i=0;i<100;i++)
    {
        cout<<input->num<<" ";
        input = input->next;
    }
    cout<<endl;

}
void KickFromRing(Node * head,int m)
{
    Node * temp = head;
    while(temp->next != temp)
    {
        for(int i =0;i<m;i++)
        {
            temp=temp->next;
            
        }
        //delete the node
        Node * del = temp->next;
        temp->next = temp->next->next;
        temp->num = del->num;
        delete del;
        PrintRing(temp);
        
    }
}

int main()
{
    Node * first = CreatRing(100);
    KickFromRing(first,10);
    return 0;
}
