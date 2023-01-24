/*6. Write a C++ program to calculate an average of 3 numbers.*/
#include<iostream>
using namespace std;
int main()
{
    
    
    cout<<"inter num_1 : ";
    int num_1;
    cin>>num_1;
    
     int num_2;
    cout<<"inter num_2 : ";
    cin>>num_2;
    
    cout<<"inter num_3 : ";
    int num_3;
    cin>>num_3;
    

    float avg=(num_1*num_2*num_3)/3;
    cout<<"average="<<avg<<endl;
    return 0;
}