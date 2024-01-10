#include <iostream>
using namespace std;
class Base
{
  public:
  Base() { cout << "Base"; }
};
class Derived : public Base
{
  public:
  Derived(int i) { cout << i; }
};
int main()
{
  Derived d2(10);
  return 0;
}
// Base10