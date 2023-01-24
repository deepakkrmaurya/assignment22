/*5. Write a C++ program to calculate the volume of a cuboid.*/
#include<iostream>
using namespace std;
int main()
{
    int l,b,h,volume;
    cout<<"innter thr lenght ,breadth and hight"<<endl;
    cin>>l>>b>>h;
    volume=l*b*h;
    cout<<"volume="<<volume;
    return 0;
}