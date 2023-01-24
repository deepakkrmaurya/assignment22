/*9. Write a C++ program to find the maximum of two numbers.*/
#include<iostream>
using namespace std;
int main()
{
    int a,b, max;
    cout<<"inter two number";
    cin>>a>>b;
    if(a>b)
    {
        max=a;
        cout<<"max :"<<a;
    }
    else
    max=b;
    cout<<"max :"<<b;
 return 0;
}