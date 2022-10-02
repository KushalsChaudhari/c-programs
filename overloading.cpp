#include <iostream>
using namespace std;
//same fn name with diffn parameters
void mul(int x, int y, int z)
{
    cout << x * y * z << endl;
}
void mul(int x, int y)
{
    cout << x * y << endl;
}

int main()
{

    mul(10, 20, 30);
    mul(10, 20);
    return 0;
}