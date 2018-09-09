//C++ program to allow user to enter two numbers and return the maximum number- call by value.
//Including library
#include<iostream>
using namespace std;

//function to accept two integers 
int max(int a, int b)
 {
   if (a > b)
   return a;   
   else 
   return b;
  }

  int main()
{
 //Ask user for two numbers
 int d,e;
 cout<<"Enter two numbers : ";
 cin>>d>>e;
 //Call the function 
 cout<<"The maximum number is "<<max(d,e)<<endl;
 return 0;
}
