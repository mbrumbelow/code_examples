#include <iostream>

class Foo{
  private:
    int _bar;
	
  public:
	Foo(int bar) {
		_bar = bar;
	};

	int bar() {
		return _bar;
	};
};

int main (void) {
	Foo foo(15);

	std::cout << foo.bar() << "\n";
}