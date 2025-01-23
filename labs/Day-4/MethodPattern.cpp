#include <iostream>
#include <string>
#include <memory>
#include <vector>

using namespace std;

// Abstarct
class Shape
{

public:
    virtual void draw() const = 0; // abstract method
    virtual ~Shape() = default;
};

// Concreate Product 1
class Circle : public Shape
{
public:
    void draw() const override
    {
        cout << "Drawing a circle" << endl;
    }
};

// Concreate Product 2
class Square : public Shape
{
public:
    void draw() const override
    {
        cout << "Drawing a Square" << endl;
    }
};

// Abstarct Createror

class ShapeFactory
{
public:
    virtual unique_ptr<Shape> createShape() = 0; // Factory Method
    virtual ~ShapeFactory() = default;
};

// Concreate Createror

class CircleFactory : public ShapeFactory
{
public:
    unique_ptr<Shape> createShape() override
    {
        return make_unique<Circle>();
    } // Factory Method
};

// Concreate Createror 2

class SquareFactory : public ShapeFactory
{
public:
    unique_ptr<Shape> createShape() override
    {
        return make_unique<Square>();
    } // Factory Method
};
int main()
{
    unique_ptr<ShapeFactory> factory;
    factory = make_unique<CircleFactory>();
    unique_ptr<Shape> circle = factory->createShape();
    circle->draw();

    factory = make_unique<SquareFactory>();
    unique_ptr<Shape> sqare = factory->createShape();
    sqare->draw();
    return 0;
}