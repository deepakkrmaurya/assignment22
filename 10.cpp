/*10. Write a C++ program to add all the numbers of an array of size 10.*/
#include<iostream>
using namespace std;
int main()
{
    int a[100],size,i;
    cout<<"inter thr array size"<<endl;
    cin>>size;
    cout<<"inter the "<<size<<" element"<<endl;
    for (size_t i = 0; i < size; i++)
    {
        cin>>a[i];
    } 
    int sum=0;
    for (size_t i = 0; i < size; i++)
    {
       sum=sum+a[i];

    }
    cout<<"addition is :"<<sum;
    return 0;
    
    
}
