#include<iostream>
using namespace std;
void fun(int a, int b){
    int c = a+b;
    cout<<c;
}
int main()
{
    //int a=5, b=10;
    //fun(a,b);
    int a=5;
    float b=5.5; // It will round of the value of float because int data tye is assigned in the top
    fun(a,b);
    return 0;
} 