/*
#include <iostream>
using namespace std;

class Arithmetic
{
private:
    int num1;
    int num2;

public:
    Arithmetic(int num1, int num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }

    void sum()
    {
        cout << "Addition = " << this->num1 + this->num2 << endl;
    }

    void sub()
    {
        if (this->num1 < this->num2)
            throw 5;
        cout << "Substraction = " << this->num1 - this->num2 << endl;
    }

    void div()
    {
        if (this->num2 == 0)
            throw 9.9;
        cout << "Division = " << this->num1 / this->num2 << endl;
    }
};

int main()
{
    Arithmetic a1(10, 0);
    a1.sum();
    try
    {
        a1.sub();
        a1.div();
    }
    catch (int error)
    {
        cout << "Substraction cannot be done" << endl;
    }
    catch (double error)
    {
        cout << "Cannot divide by 0" << endl;
    }

    cout << "Thankyou for using our application :)" << endl;
    return 0;
}
*/
#include<iostream>
using namespace std;

class arithmatic_oper
{
int num1;
int num2;
public:
arithmatic_oper(int n1,int n2)
{
num1=n1;
num2=n2;
}
void add()
{
    cout<<num1+num2<<endl;
}
void sub()
{
cout<<num1-num2<<endl;
}
void mul()
{
    if (num2==0)
    throw 404;
cout<<num1*num2<<endl;
}

void div()
{
    if(num2==0)
    throw 9.9;
cout<<num1/num2<<endl;
}
};

int main ()
{
int number1,number2;
cout<<"enter num1 and num2"<<endl;
cin>>number1>>number2;
arithmatic_oper aoper(number1,number2);
aoper.add();
aoper.sub();

try
{
    aoper.mul();
    aoper.div();
}


catch(int error)
{
    cout<<"invalid operation due to 0"<<endl;
}

catch(float error)
{
    cout<<"invalid operation due to 0"<<endl;
}

return 0;
}
