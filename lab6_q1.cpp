//include library
#include<iostream>
using namespace std;
//define a function to ask the user for the values
void askuser(float &unitCst,float &units, float &taxRt)
{
	cout<<"Enter Unit Cost : ";
	cin>>unitCst;
	cout<<"Enter the no. of units : ";
	cin>>units;
	cout<<"Enter the Tax Rate : ";
	cin>>taxRt;
}
//define a function to calculate the tax rate
void process(float unitCst, float units, float taxRt, float &salesTx, float &totDue)
{
	salesTx=units*unitCst*taxRt;
	totDue=salesTx+(units*unitCst);
}
//define a function to show inputed value
void display(float unitCst, float units, float taxRt,float salesTx,float totDue)
{
	cout<<"BILL"<<endl<<"Unit Cost = Rs. "<<unitCst<<endl<<"No. of Units = "<<units<<endl<<"Tax Rate = "<<taxRt<<endl<<"Sales Tax Amount = "<<salesTx<<endl<<"Total Due = "<<totDue<<endl;
}
//write the main function
int main()
{
	//declare float variables 
	float unitCst, unitsPurch,taxRate,salesTax,totalDue;
	//call the askuser function
	askuser(unitCst,unitsPurch,taxRate);
	//call the process function
	process(unitCst,unitsPurch,taxRate,salesTax,totalDue);
	//call the display
	display(unitCst,unitsPurch,taxRate,salesTax,totalDue);
	return 0;
}
