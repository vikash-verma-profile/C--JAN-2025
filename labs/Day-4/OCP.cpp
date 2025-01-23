#include <iostream>
#include <string>
#include <memory>
#include <vector>

using namespace std;

class Shape{

    public:
    virtual void draw() const=0; //abstract method
    virtual ~Shape()=default;
};

//Derived class
class Circle:public Shape{
    public:
    void draw() const override{
        cout<<"Drawing a circle"<<endl;
    }   
};
class Square:public Shape{
    public:
       void draw() const override{
        cout<<"Drawing a Square"<<endl;
    }   
};

void renderShapes(const vector<shared_ptr<Shape>> & shapes){
    for (const auto&shape:shapes)
    {
       shape->draw();
    }   
}

int main(){
    vector<shared_ptr<Shape>> shapes;
    shapes.push_back(make_shared<Circle>());
    shapes.push_back(make_shared<Square>());

    renderShapes(shapes);

    return 0;
}