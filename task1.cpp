#include<iostream>
using namespace std;

int x=10;
void function()
{

	cout<<"The value of the x is: "<<x<<endl;
	int x = 20;

}

main()
{
	function();
	int x = 30;
	cout<<" The value of the x is: "<<x<<endl ;
	function();

}