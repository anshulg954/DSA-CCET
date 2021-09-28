#include<iostream>
using namespace std;
class operatorsOverload(){
	int i;
	public:
	void input()
	{
		cout<<"Enter a number"<<endl;
		cin>>i;
	}
	void operator ++(){
	++i;
	}
	void display()
	{
		cout<<i<<endl;
	}
}
int main()
{
	class operatorsOverload test;
	test.input();
	test++;
	test.display();
	return 0;
}

