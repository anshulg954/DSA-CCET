#include<iostream>
 
using namespace std;
 
class fibb
{
public:
	void series(int n){
	int c, first = 0, second = 1, next;
   cout << "First " << n << " terms of Fibonacci series are :- " << endl;
   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      cout << next << endl;
   }
}
};
 int main(){
 	int n;
 	cout<<"ENter n"<<endl;
 	cin>>n;
 	fibb f;
 	f.series(n);
   return 0;
}
