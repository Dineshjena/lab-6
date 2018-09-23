//include library
#include<iostream>
using namespace std;
//define a function to return uppercase
char toUpper(char inputChar)
{
	//subtract 32 from the ASCII value 
	inputChar-=32;
	return inputChar;
}
//define a function to return lowercase
char toLower(char inputChar)
{
	//add 32 to the ASCII value 
	inputChar+=32;
	return inputChar;
}
//write the main function
int main()
{
	//define a char variable ch
	char ch;
	cout<<"Enter an alphabet : ";
	cin>>ch;
	if(ch>='a'&&ch<='z')
	{
		ch=toUpper(ch);
		cout<<"Upper Case Value - "<<ch<<endl;
	}
	else if(ch>='A'&&ch<='Z')
	{
		
		ch=toLower(ch);
		cout<<"Lower Case Value - "<<ch<<endl;
	}
	else cout<<"PLease input a valid alphabet";
	return 0;
}

