#include<iostream>
#include<string>
using namespace std;

int GetLength(const char* & str1, int length)
{
    if(str1 == NULL)
        return -1;
    int num=0;
    for(int i=0; i<length;i++)
    {
        if (str1[i] == ' ')
            ++num;
    }
    return length+num*2;

}

bool RepalceBlank(const char* src, int length, char* & des)
{
    if (src == NULL)
        return false;
    delete [] des;
    int finallength = GetLength(src,length);
    des = new char[finallength +1];
    des[finallength]='\0';
    const char * p1 = src+length-1;
    char * p2 = des+finallength-1;
    int i = 0;
    while(i<length)
    {
        if(*(p1-i) != ' ')
        {
            *p2 = *(p1-i);
            --p2;
            ++i;
        }
        else
        {
            *p2='0';
            --p2;
            *p2='2';
            --p2;
            *p2='%';
            --p2;
            ++i;
        }
    }
    return true;
}

int main()
{
    char* p = "hello world";
    char* des=NULL;
    int l = strlen(p);
    RepalceBlank(p,l,des);
    
    cout<<des<<endl;
    return 0;
}
