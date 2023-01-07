#include<iostream>
using namespace std;

string unit;
int length, width, height;
void pyramidvolume();

main()
{
while(true)
{
	cout<<"Enter length: ";
	cin>>length;
	cout<<"Enter width: ";
	cin>>width;
	cout<<"Enter height: ";
	cin>>height;
	cout<<"Enter unit in which you want to see the answer.(cm,mm,km): ";
	cin>>unit;
	

	pyramidvolume();
}

}
void pyramidvolume()
{	
	if(unit == "cm")
	{
		int volume = ((length*100) * (width*100) * (height*100))/3;
	
		cout<<"Volume is: "<<volume<<endl;	
	}
	
	if(unit == "km")
	{
		float volume = ((length*0.001) * (width*0.001) * (height*0.001))/3;
	
		cout<<"Volume is: "<<volume<<endl;
	}
	if(unit == "mm")
	{
		int volume = ((length*1000) * (width*1000) * (height*1000))/3;
	
		cout<<"Volume is: "<<volume<<endl;
	}
}

