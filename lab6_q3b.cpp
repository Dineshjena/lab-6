//Program to ask the user for two numbers and return the maximum number.- Using call by reference.
//include library
#include<iostream>
using namespace std;
//define a function 
void maxnum(int a, int b, int &c)
{
	if(a>=b)
	c=a;
	else
	c=b;
}
//write the main function
int main()
{
	//declare three int variables
	int a,b,c;
	//Ask the user to input two numbers
	cout<<"Enter two numbers : ";
	cin>>a>>b;
	//call the function 
	maxnum(a,b,c);
	//print the value of the third variable as the maximum
	cout<<"Maximum number is "<<c<<endl;
	return 0;
}
