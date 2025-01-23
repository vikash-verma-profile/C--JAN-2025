#include <iostream>
#include <fstream>
#include <memory>
using namespace std;

// class Keybord{
//     public:
//     void input(){
//         cout<<"Keyboard"<<endl;
//     }
// };

// class Computer{
//     private:
//     Keybord keybord;

//     public:
//     void processInput(){
//         keybord.input();
//     }
// };

// Abstraction
class InputDevice
{
public:
    virtual void input() = 0;
    virtual ~InputDevice() = default;
};

class Keyboard : public InputDevice
{
public:
    void input() override
    {
        cout << "Keyboard" << endl;
    }
};
class Mouse : public InputDevice
{
public:
    void input() override
    {
        cout << "Mouse" << endl;
    }
};

// High

class Computer
{
private:
    shared_ptr<InputDevice> inputDevice;

public:
    Computer(shared_ptr<InputDevice> device) : inputDevice(device) {}
    void processInput()
    {
        inputDevice->input();
    }
};

int main()
{
    shared_ptr<Keyboard> keyboard = make_shared<Keyboard>();
    shared_ptr<Mouse> mouse = make_shared<Mouse>();

    Computer comp1(keyboard);
    comp1.processInput();
    Computer comp2(mouse);
    comp2.processInput();
    return 0;
}