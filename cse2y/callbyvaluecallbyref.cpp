#include<iostream>
using namespace std;
class swap1{
     int a,b;
	public:	
	void input(){
		cout<<"Enter the no.s"<<endl;
		cin>>a>>b;
	}
	void display()
	{
		cout<< a <<" "<<b<<" ";
		
	}
	void xchange(){
		int temp;
		temp=a;
		a=b;
		b=temp;
	}		
	void ref(int &a, int &b){
		int temp;
		temp =a;
		a=b;
		b=temp;
	}
};
int main()
{
	int a,b;
	swap1 obj;
	obj.input();
	obj.display();
	obj.xchange();
	obj.display();
	obj.ref(a,b);
	obj.display();
	return 0;
}																																									
