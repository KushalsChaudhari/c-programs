#include <iostream>
using namespace std;

class ug
{
public:
    int fee = 40000;
};
class dipolma : public ug
{
public:
    int duration = 3;
};

int main()
{
    dipolma dp;
    cout << dp.fee;
    cout << dp.duration;

    return 0;
}