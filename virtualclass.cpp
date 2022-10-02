#include <iostream>
using namespace std;

class shape//abstrct class
{
protected:
int side,len,bredth,radius;
public:
    virtual int area() = 0;//pure virtual fn

    int in()
    {
        return side = 10,len=12,bredth=24,radius=25;
    }
};

class square : public shape
{
public:
    int area()
    {
        return (side*side);
    }
};

class rectangle : public shape
{
public:
    int area()
    {
        return (len*bredth);
    }
};


class circle : public shape
{
public:
    int area()
    {
        return (3.142*radius*2);
    }
};

// class triangle : public shape
// {
// public:
//     int area()
//     {
//         return (0.5*height*width);
//     }
// };



int main()
{
    square s;
    s.in();
    cout <<"area of square "<< s.area()<< endl;

    rectangle r;
    r.in();
    cout<<"area of rectangle "<<r.area()<<endl;

    circle c;
    c.in();
    cout <<"area of circle "<< c.area()<< endl;

    return 0;
}