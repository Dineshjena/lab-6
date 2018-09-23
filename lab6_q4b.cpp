//Program to ask the user for two numbers and show the minimum number.-Using all by reference.
//include library
#include<iostream>
using namespace std;
//define a function
void minnum(int a, int b, int &c)
{
	if(a<=b)
	c=a;
	else
	c=b;
}
//write the main function
int main()
{
	//declare variables
	int a,b,c;
	//Ask the user to input two numbers
	cout<<"Enter teo numbers : ";
	cin>>a>>b;
	//call the function 
	minnum(a,b,c);
	//print the value of the third variable as the minimum
	cout<<"Minimum number is "<<c<<endl;
	return 0;
}
