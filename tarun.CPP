#include <iostream>

class Base {

public: virtual void Function() {
    std::cout << "I'm a base class" << std::endl;

}
}
;

class Derived : public Base
{
public:
    void Function() override
    {
        std::cout << "I'm a derived class" << std::endl;
    }
};

void FunctionCaller(Base b) { b.Function(); }

int main()
{

    Base base_instance;

    Derived derived_instance;

    FunctionCaller(base_instance);
    FunctionCaller(derived_instance);

    return 0;
}