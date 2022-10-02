#include <iostream>
using namespace std;

class test
{

public:
    static int num;
    static int op()
    {
        cout << "static output test" << endl;
    }
};


int test::num = 10;
int main()
{
    cout << test::num<<endl;
    test::op();
    return 0;
}