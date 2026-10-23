#include <iostream>

class ClassA
{
public:
    void greet()
    {
        std::cout << "Greeting from ClassA" << std::endl;
    }
};

class ClassB
{
public:
    void greet()
    {
        std::cout << "Greeting from ClassB" << std::endl;
    }
};

class DerivedAB : public ClassA, public ClassB
{
};

class Base
{
public:
    int baseValue;
    Base() : baseValue(100) {}
};

class LeftBranch : virtual public Base
{
};
class RightBranch : virtual public Base
{
};

class BottomDiamond : public LeftBranch, public RightBranch
{
public:
    void display()
    {

        std::cout << "Base value via diamond inheritance: " << baseValue << std::endl;
    }
};

int main()
{

    DerivedAB obj;
    std::cout << "--- Approach 1: Scope Resolution Operator ---" << std::endl;
    obj.ClassA::greet();
    obj.ClassB::greet();

    std::cout << "\n--- Approach 2: Virtual Base Class ---" << std::endl;
    BottomDiamond diamondObj;
    diamondObj.display();

    return 0;
}