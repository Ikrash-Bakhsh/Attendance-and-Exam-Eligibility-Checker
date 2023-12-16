#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d;
	char Q;
	b=100;
	cout<<"Enter the Number of classes taken : ";
	cin>>a;
	c=(a/b)*100;
	cout<<"Percentage of classes : "<<c;
	cout<<"%";
	if(c>=75)
	{
	cout<<"\nYou are allowed to sit in the exams";	
	}
	else
	{
		cout<<"\nSorry your Attendence percentage is low,You cannot give exams";
	}
	if(c<=75){
	
	cout<<"\nIf you had Medical Issue Press Y if not Press N= ";
	cin>>Q;
	}
	
	if(Q=='Y'||Q=='y')
	{
	  cout<<"Submit your medical reports to Examination center\n";
	}
	else if(Q=='N'||Q=='n')
	{
		cout<<"You also dont have a medical issue,You are NOT allowed";
	}
else{
	cout<<"Wrong input";
}
	return 0;
}
