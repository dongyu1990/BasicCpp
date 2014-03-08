#include"Tree.h"
using namespace std;

int main()
{
    Tree newtree;
    newtree.CreatTree(newtree.root);
    newtree.PreOrder(newtree.root);
    return 0;
    
}
