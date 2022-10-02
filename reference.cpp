#include<iostream>
using namespace std;
int add(int& x,int* y)
{
    return x+*y;
}

int main()
{
    int num1=10,num2=20;
    cout<<add(num1,&num2);
    return 0;

}