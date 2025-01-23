#include <iostream>
#include <string>
#include <memory>
#include <vector>

using namespace std;

// Abstarct
class Shape
{

public:
    virtual void draw() = 0; // excpected method
    virtual ~Shape() = default;
};

// Adaptee
class Rectangle
{
public:
    void drawRectangle(int x1, int y1, int x2, int y2)
    {
        cout << "Drawing a Rectangle" << endl;
    }
};

// Adapter
class RectangleAdapter : public Shape
{
private:
    Rectangle *rectangle;

public:
    RectangleAdapter(Rectangle *rect) : rectangle(rect) {}
    void draw() override
    {
        rectangle->drawRectangle(0, 0, 10, 10);
    }
};

int main()
{
    Rectangle* rect=new Rectangle();
    Shape* shape=new RectangleAdapter(rect);

    shape->draw();// client uses the expected interface

    delete rect;
    delete shape;
    return 0;
}