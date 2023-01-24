/*8. Write a C++ program to swap values of two int variables without using third variable*/
#include<iostream>
using namespace std;
int main(void)
{
    int a;
    int b;
    cout<<"inter two number";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a:"<<a<<endl<<"b:"<<b;


}