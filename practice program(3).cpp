#include<iostream>
using namespace std;

int main()
{
int p;
    int q;
    cout <<"enter a value of p"<<endl;
    cin>>p;
    cout<<"enter a value of q"<<endl;
    cin>>q;
    p=p+q;
    
    q=p-q;
    p=p-q;
    
    cout<<"p="<<p<<endl;
    cout<<"q="<<q<<endl;
    return 0;
}