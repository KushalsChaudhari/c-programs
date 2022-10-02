#include <iostream>
using namespace std;

void sum(int x, int y, int z = 0)
{
    cout << x + y + z << endl;
}
// void mul(int x, int y)
// {
//     cout << x * y << endl;
// }

int main()
{
    sum(10, 20, 30);
    sum(10, 20);
    return 0;
}

