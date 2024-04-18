#include <iostream>

class Foo {

public:
    Foo() {

    }

    void marf(bool b = true) {
        std::cout << "Foo: " << b << std::endl;
    }
};


int main() {

    Foo bar;
    bar.marf();
    bar.marf(false);
    
    return 0;

}
