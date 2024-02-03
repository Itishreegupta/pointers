#include <iostream>
using namespace std;

int main()
{
    int var1,var2,var3;
    
    cout<<"Enter the value for 1st variable : ";
    cin>>var1;
    cout<<"Enter the value for 2nd variable : ";
    cin>>var2;
    cout<<"Enter the value for 3rd variable : ";
    cin>>var3;

    cout << "Address of var1: "<< &var1 << endl;

    cout << "Address of var2: " << &var2 << endl;

    cout << "Address of var3: " << &var3 << endl;
}