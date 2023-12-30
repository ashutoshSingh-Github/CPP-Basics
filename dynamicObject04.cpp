// If we allocate dynamic memory inside the definition of any type of constructor(Default/Parameterized) using new/malloc()/calloc() then that type of constructor is known as Dynamic constructor. By using this constructor, we can dynamically initialize the objects of the class.
#include <iostream>
using namespace std;

class className{
	const char* pointer = NULL;
    
	public:
	// default constructor
	className()
	{
		// allocating memory at run time / dynamic memory allocation
		pointer = new char[8];
		pointer = "Dynamic";
	}
	void show()
	{
		cout << pointer << endl;
	}
};
int main()
{
	className *ptr = new className;
	ptr->show();
    delete ptr;

    return 0;
}