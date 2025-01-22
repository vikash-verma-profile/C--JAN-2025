#include <iostream>

class IShape
{
public:
    virtual void draw() const = 0;
    virtual double area() const = 0;
    virtual ~IShape() {} // virtual destrcutors
};

class Circle:public IShape{
    private:
    double radius;
    public:
    Circle(double r):radius(r){}

    
};

class Rectangle:public IShape{
    private:
    double width,height;
    public:
    Rectangle(double w,double h):width(w),height(h){}

    
};

int main(){


    return 0;
}