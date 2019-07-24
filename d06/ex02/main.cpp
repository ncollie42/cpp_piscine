
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base* generate(void);
void identify_from_pointer(Base* ptr);
void identify_from_reference(Base& ref);

int main(void)
{
	srand(time(0));
	Base* ptr = generate();

	identify_from_pointer(ptr);
	identify_from_reference(*ptr);

	delete ptr;
}

Base* generate(void)
{
	int num = (rand() % 3);

	if (num == 0)
		return new A();
    else if (num == 1)
		return new B();
    else 
		return new C();
}

void identify_from_pointer(Base* ptr)
{
	A* a = dynamic_cast<A*>(ptr);
	B* b = dynamic_cast<B*>(ptr);
	C* c = dynamic_cast<C*>(ptr);
	if (a) 
		std::cout << "Pointer of type A.\n";
	 else if (b) 
		std::cout << "Pointer of type B.\n";
	else if (c) 
		std::cout << "Pointer of type C.\n";
	else 
    	std::cout << "unknown\n";
}

void identify_from_reference(Base& ref)
{
	A* a = dynamic_cast<A*>(&ref);
	B* b = dynamic_cast<B*>(&ref);
	C* c = dynamic_cast<C*>(&ref);
	if (a) 
		std::cout << "Reference of type A.\n";
	 else if (b) 
		std::cout << "Reference of type B.\n";
	else if (c) 
		std::cout << "Reference of type C.\n";
	else 
    	std::cout << "unknown\n";
	
}