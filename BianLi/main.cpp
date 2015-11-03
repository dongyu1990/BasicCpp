#include"Tree.h"
using namespace std;

int main()
{
    Tree newtree;
    newtree.CreatTree(newtree.root);
    newtree.PreOrder(newtree.root);
    cout<<endl;
    newtree.PreOrder_2(newtree.root);
    cout<<endl;
    newtree.MidOrder(newtree.root);
    cout<<endl;
    newtree.MidOrder_2(newtree.root);
    cout<<endl;
    newtree.PostOrder(newtree.root);
    cout<<endl;
    newtree.PostOrder_2(newtree.root);
    return 0;
    
}
