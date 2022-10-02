#include <iostream>
using namespace std;

template<class p,class q>


class rabbit
{
    p no;
    q colour;

public:
    void fn(p  y, q z)
    {
        no=y;
        colour=z;
    }
    void op()
    {
        cout << no << colour << endl;
    }
};
int main()
{
    rabbit <int,string>r1;
    r1.fn(1, "white");
    r1.op();
    return 0;
}