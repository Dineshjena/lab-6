//Program to show the value of sum of all odd numbers between the entered numbers. 

//Including library
 #include<iostream>
 using namespace std;
//Function to accept two intetgers
 int sumOddNum(int a, int b)
 {
  int sum=0;
  for(int i = a+1;i < b; i++)
   {
     if (i % 2 != 0)
     sum = sum + i;
   } 
  return sum;
  }

int main()
{

//Allowing user to input two numbers
 int firstNum,secondNUM;
 cout<<"Enter two numbers : ";
 cin>>firstNum>>secondNUM;
//Calling the function
 cout<< "The sum of odd numbers between "<<firstNum<<" and "<<secondNUM<< " is "<<sumOddNum(firstNum,secondNUM);
 return 0;
} 
        	

