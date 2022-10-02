#include <iostream>
using namespace std;

class test
{
    int num;
    string res;

public:
    test()
    { // default constructor/parenrless
        num = 48;
        res = "pass";
    }

    test(int x, string y) // perenthesis constructor
    {
        num = x;
        res = y;
    }
    void print()
    {
        cout << num << res << endl;
    }
};
int main()
{
    test t1;
    t1.print();
    test t2(38, "fail");
    t2.print();
    test t3(t1); // copy constructor
    t3.print();

    return 0;
}
