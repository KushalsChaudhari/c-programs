
#include <iostream>
using namespace std;

class bank
{
private:
    long long int acc_no;
    double bal;
    string name;

public:
    bank()
    {
        acc_no = 60252829352;
        bal = 28000;
        name = "abc xyz";
    }
    // void set_acc_bal(int x)//mutator
    // {
    //     this->bal = x;
    // }
    void add_acc_bal(int x)
    {
        if (this->bal != 0)
            this->bal = this->bal + x;
        else
            cout << "plese enter valid money" << endl;
    }
    void withdraw_acc_bal(int y)
    {
        if (bal >= y)
            this->bal = this->bal - y;
        else
            cout << "insufficient balace" << endl;
    }
    void get_acc_bal() // inspector
    {
        cout << this->name << endl
             << this->acc_no << endl
             << this->bal << endl;
    }

public:
};
int main()
{
    bank b1;
    // b1.acc_no;
    // b1.bal;
    // b1.name;
    //    b1.set_acc_bal(10000);
    b1.add_acc_bal(10000);
    b1.withdraw_acc_bal(50000);
    b1.get_acc_bal();
    b1.add_acc_bal(22000);
    b1.get_acc_bal();
    b1.withdraw_acc_bal(50000);
    b1.get_acc_bal();
    return 0;
}
