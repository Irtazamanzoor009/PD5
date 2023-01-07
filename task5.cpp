#include<iostream>
using namespace std;

void firm();
int hours, days, workers;

main()
{
while(true)
{	
	cout<<"Enter number of hours: ";
	cin>>hours;
	cout<<"Enter number of days: ";
	cin>>days;
	cout<<"Enter the number of workers: ";
	cin>>workers;

	firm();

}
}

void firm()
{
	int totalhours = days * 10;
	float percent = totalhours * 0.1;
	int result = totalhours - percent;
	int result2 = result * workers;
	int final = result2 - hours;

	if(final > hours)
	{
		cout<<"Yes!" <<final<<" hours left."<<endl;
	}	
	if(final < hours)
	{
		cout<<"Not enough time!"<< final*-1<<" hours needed."<<endl;
	}


}

