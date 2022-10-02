#include <iostream>
using namespace std;
// diffn fn name with same parameters

void multi(int x, int y)
{
    cout << x * y << endl;
}
void mul(int x, int y)
{
    cout << x * y << endl;
}

int main()
{
    mul(10, 20);
    mul(10, 20);
    return 0;
}