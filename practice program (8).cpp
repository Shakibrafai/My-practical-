#include<iostream>
using namespace std;

int main()
{
    double kmtom=1000.0;
    double mtocm=100.0;
    double km;
    cout<<"enter km";
    cin>>km;
    double meter = kmtom * km;
    double cm =mtocm * meter;
    cout <<"km to meter=" <<meter <<endl;
    cout <<"meter to cm=" <<cm <<endl;



    return 0;
}