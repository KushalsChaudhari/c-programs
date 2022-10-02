#include <iostream>
using namespace std;

class test1
{
    int data;
    int val;

public:
    friend class test2;
    void input()
    {
        this->data = 10;
        this->val = 20;
    }
};

class test2
{
public:
    void op(test1 t1)
    {
        cout << t1.data*t1.val;
    }
};
int main()
{
test1 t1;
test2 t2;
t1.input();
t2.op(t1); 
    return 0;
}