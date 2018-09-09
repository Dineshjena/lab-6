//C++ program to allow user to enter two numbers and return the minimum number- call by value.
//Including library
#include<iostream>
using namespace std;

//function to accept two integers 
int min(int a, int b)
 {
   int c;
   if (a < b)
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
 cout<<"The minimum number is "<<min(d,e)<<endl;
 return 0;
}
