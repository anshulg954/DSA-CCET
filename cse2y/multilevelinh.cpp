#include <iostream>
using namespace std;

class A
{
    public:
      void display()
      {
          cout<<"Base class content.";
      }
};

class B : public A
{
	public:
void display()
      {
          cout<<"Base B class content.";
      }
};

class C : public B
{
 public:
void display()
      {
          cout<<"Base C class content.";
      }
};

int main()
{
    C obj;
    obj.display();
    return 0;
}
