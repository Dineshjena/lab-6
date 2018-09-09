//C++ program to allow user to input two numbers and the operation they want to perform with the given numbers and return the respective value.
//Including library
#include<iostream>
using namespace std;

//funtion
int func(int a, int b, int &x)
 {
  if (x == 1)
   {
    int sum = a + b;
    cout<<"Sum of the two numbers is "<<sum;
    }
  if (x == 2)
   {
     if(a>b)
     cout<<"The maximum number is " <<a;
     else 
     cout<<"The maximum number is " <<b;
    }
   if (x == 3)
     {
      if(a<b)
      cout<<"The minimum number is " <<a;
      else 
      cout<<"The minimum number is " <<b;
      } 

  }
int main()
{
//Asking two numbers to the user
 int c,d,n;
 cout<<"Enter two numbers : ";
 cin>>c>>d;
//Asking about the operation theuy want to perform
 cout<<" \n Which operation you want to perform with these numbers";
 cout<<" \n For sum of the two numbers, press 1";
 cout<<" \n For finding the maximum, press 2";
 cout<<" \n For finding the minimum, press 3";
 cout<<" \n Enter your choice";
 cin>>n;
//Calling the function
 func(c,d,n);
 return 0;
}
 
 
