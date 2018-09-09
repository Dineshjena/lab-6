//C++ program to ask for 2 numbers and return the sum using functions- call by value
//including libabry
#include<iostream>
using namespace std;

//funcion that has two int parameters
 int sum(int a, int b)
 {
   // showing their sum
      int sum = a + b;
      return sum;
 }
// drive fuction
int main()
{
  int c,d;
//ask the user for two numners
  cout<<"Enter two numbers: ";
  cin>>c>>d;
// tell user the sum
  cout<<"The sum of the numbers "<<c<< " and " << d <<" is "<< 
//call function for numbers as arguments
  sum(c,d) <<endl;
  return 0;
}
