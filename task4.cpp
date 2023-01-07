#include<iostream>
using namespace std;


float taxcalculator();
char code;
float price;
string name;

main()
{
	
	cout<<"Enter name of vehicle: ";
	cin>>name;
	cout<<"Enter vehicle code: ";
	cin>>code;
	cout<<"Enter the amount of vehicle: ";
	cin>>price;

	taxcalculator();
		



}

float taxcalculator()
{
	if(code == 'M')
	{
		float taxamount = price * 0.06 ;
		float result = price - taxamount;
		cout<<"The price of a vehicle of type " <<name<<" after adding the tax is "<<taxamount<<" Now the final price of a vehicle is: "<<result<<endl;
	}
	if(code == 'E')
	{
		float taxamount = price * 0.08 ;
		float result = price - taxamount;
		cout<<"The price of a vehicle of type " <<name<<" after adding the tax is "<<taxamount<<" Now the final price of a vehicle is: "<<result<<endl;
	}
	if(code == 'S')
	{
		float taxamount = price * 0.1 ;
		float result = price - taxamount;
		cout<<"The price of a vehicle of type " <<name<<" after adding the tax is "<<taxamount<<" Now the final price of a vehicle is: "<<result<<endl;
	}
	if(code == 'V')
	{
		float taxamount = price * 0.12 ;
		float result = price - taxamount;
		cout<<"The price of a vehicle of type " <<name<<" after adding the tax is "<<taxamount<<" Now the final price of a vehicle is: "<<result<<endl;
	}
	if(code == 'T')
	{
		float taxamount = price * 0.15 ;
		float result = price - taxamount;
		cout<<"The price of a vehicle of type " <<name<<" after adding the tax is "<<taxamount<<" Now the final price of a vehicle is: "<<result<<endl;
	}		


}